import java.util.ArrayList;
import java.util.Scanner;

public class Main {
    /**
     * 1. Crea una clase llamada MiArreglo que contenga una lista dinámica de tipo String usando la clase ArrayList .
     * 2. Esta clase deberá tener los siguientes métodos:
     * - tamaño: Regresa el número de elementos de la lista.
     * - ordenar: Ordena la lista de manera decreciente.
     * - búsquedaMayor: Busca la primera palabra más larga (con mayor número de caracteres) dentro de la lista y regresa el índice de esta.
     * 3. Crea tu clase principal (Main) leyendo los elementos tipo String dados por Alpahgrader. Llama a tus tres métodos e imprime los resultados en el orden indicado en el punto 2.
     * @param args
     */
    public static void main(String[] args) {
        Scanner stdin = new Scanner(System.in);
        ArrayList<String> arreglo = new ArrayList<String>();
        while (stdin.hasNextLine()) {
            arreglo.add(stdin.nextLine());
        }
        stdin.close();

        MiArreglo unArreglo = new MiArreglo(arreglo);
        System.out.println("Tamano: " + unArreglo.tamano());
        System.out.println("Lista ordenada: " + unArreglo.ordenar());
        System.out.println("Indice palabra mayor: " + unArreglo.busquedaMayor());
    }
}
