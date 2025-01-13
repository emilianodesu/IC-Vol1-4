import java.util.Scanner;

public class PruebaMenu {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int opcion;
        ArbolAVL unArbolAVL = new ArbolAVL(); // Debe instanciarse afuera del menu para que no se cree en cada ciclo del menu
        
        do {
            System.out.println("""
                    \n1. Arbol AVL""");
            System.out.print("Opcion: ");
            opcion = sc.nextInt();
            switch (opcion) {
                case 1:
                    unArbolAVL = ArbolAVL.menuAVL(unArbolAVL); // Permite guardar el estado del árbol al salir del submenu de AVL. Retoma desde el punto donde se dejó.
                    break;
            
                default:
                    break;
            }
        } while (opcion == 1);
        
        sc.close();
    }
}
