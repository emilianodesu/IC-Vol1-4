import java.io.BufferedReader;
import java.io.FileReader;
import java.io.IOException;

public class ClaseFileReader {
    public static void main(String[] escribir) {
        // String texto = "";
        try {
            BufferedReader br;
            FileReader fr = new FileReader("leer2.txt");
            br = new BufferedReader(fr);
            System.out.println("El texto contenido en el archivo leer.txt es:");
            String linea = br.readLine();
            while (linea != null) {
                System.out.println(linea);
                linea = br.readLine();
            }
            br.close();
        } catch (IOException ioe) {
            System.out.println("\n\nError al abrir o guardar el archivo:");
            ioe.printStackTrace();
        } catch (Exception e){
            System.out.println("\n\nError al leer de teclado:");
            e.printStackTrace();
        }
    }
}
