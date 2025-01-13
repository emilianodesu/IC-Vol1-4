import java.util.ArrayList;

public class Colecciones {
    public static void main(String[] args) {
        ArrayList<Integer> arreglo = new ArrayList<Integer>();
        arreglo.add(1);
        arreglo.add(8);
        arreglo.add(5);
        arreglo.add(1, 9);
        System.out.println("Tamaño del array list " + arreglo.size());
        System.out.println("Elemento de la posicion 3: " + arreglo.get(3));
        for (Integer elemento : arreglo) {
            System.out.println(elemento);
        }
    }
}
