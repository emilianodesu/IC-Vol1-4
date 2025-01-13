import java.util.Scanner;
import java.util.ArrayDeque;
import java.io.BufferedReader;
import java.io.FileReader;
import java.io.IOException;
import mx.unam.fi.poo.excepciones.*;

public class Archivos {
    public static void main(String[] args) {
        java.util.Scanner stdin = new Scanner(System.in);
        String fileName = stdin.next();
        ArrayDeque<String> items = new ArrayDeque<>();
        stdin.close();
        try {
            FileReader fr = new FileReader(fileName);
            BufferedReader br = new BufferedReader(fr);
            String line = br.readLine();
            while (line != null) {
                items.add(line);
                line = br.readLine();
            }
            br.close();

        } catch (IOException ioe) {
            ioe.printStackTrace();
        }
        try {
            Integer.parseInt(items.peek());
            while (!items.isEmpty()) {
                int aux = Integer.parseInt(items.poll());
                System.out.println(Conversiones.decToHex(aux));
            }
        } catch (NumberFormatException e) {
            while (!items.isEmpty()) {
                String temp = items.poll();
                try {
                    System.out.println(Conversiones.hexToDec(temp));
                } catch (NegativeValueEnteredException | InvalidHexException | NotANumberException | NotADecimalNumberException e1) {
                    e1.printStackTrace();
                }
            }
        } catch (NegativeValueEnteredException ne) {
            ne.printStackTrace();
        }

    }
}
