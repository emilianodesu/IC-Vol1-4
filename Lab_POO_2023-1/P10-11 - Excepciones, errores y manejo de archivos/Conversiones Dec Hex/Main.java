import java.util.InputMismatchException;
import java.util.Scanner;
import mx.unam.fi.poo.excepciones.*;

public class Main {
    public static void main(String[] args) throws NegativeValueEnteredException {
        java.util.Scanner stdin = new Scanner(System.in);
        try {
            if (stdin.hasNext("-0")) {
                stdin.close();
                throw new NegativeValueEnteredException();
            }
            int dec = stdin.nextInt();
            System.out.println(Conversiones.decToHex(dec));
        } catch (InputMismatchException e) {
            String input = stdin.next();
            try {
                System.out.println(Conversiones.hexToDec(input));
            } catch (NotANumberException | NotADecimalNumberException | InvalidHexException | NegativeValueEnteredException ex) {
                System.out.println(ex.getMessage());
            }
        } catch (NegativeValueEnteredException e) {
            System.out.println(e.getMessage());
        }
        stdin.close();
    }
}
