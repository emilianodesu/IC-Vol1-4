public class App {
    public static void main(String[] args) throws Exception {
        ArbolAVL arbol = new ArbolAVL();

        // Rotacion Simple a la derecha
        /*
         * 20 (2)
         * /
         * 12 (1)
         * /
         * 5 (0)
         */
        System.out.println("ROTACION SIMPLE DERECHA - EJEMPLO 1");
        arbol.insertar(20);
        arbol.insertar(12);
        arbol.insertar(5);
        // arbol.mostrarArbol();

        System.out.println("\nROTACION SIMPLE DERECHA - EJEMPLO 2");
        arbol.vaciar();
        /*
         * 20 (2)
         * / \
         * 15 (1) 25 (0)
         * / \
         * 10 (1) 18 (0)
         * /
         * 5 (0)
         */
        arbol.insertar(20);
        arbol.insertar(15);
        arbol.insertar(25);
        arbol.insertar(10);
        arbol.insertar(18);
        arbol.insertar(5);
        // arbol.mostrarArbol();

        // Separador
        System.out.println("\n***********************************************************************");
        System.out.println("***********************************************************************");

        // Rotacion Simple a la izquierda
        System.out.println("\nROTACION SIMPLE IZQUIERDA - EJEMPLO 1");
        /*
         * 5 (-2)
         * \
         * 12 (-1)
         * \
         * 20 (0)
         */
        arbol.vaciar();
        arbol.insertar(5);
        arbol.insertar(12);
        arbol.insertar(20);
        // arbol.mostrarArbol();

        // Rotacion Simple izquierda
        System.out.println("\nROTACION SIMPLE IZQUIERDA - EJEMPLO 2");
        /*
         * 10 (-2)
         * / \
         * 5 (0) 18 (-1)
         * / \
         * 15 (0) 20 (-1)
         * \
         * 25 (0)
         */
        arbol.vaciar();
        arbol.insertar(10);
        arbol.insertar(5);
        arbol.insertar(18);
        arbol.insertar(15);
        arbol.insertar(20);
        arbol.insertar(25);
        // arbol.mostrarArbol();

        // Separador
        System.out.println("\n***********************************************************************");
        System.out.println("***********************************************************************");

        // Rotacion Doble derecha-izquierda
        System.out.println("\nROTACION DOBLE DERECHA-IZQUIERDA - EJEMPLO 1");
        /*
         * 5 (-2)
         * \
         * 12 (1)
         * /
         * 8 (0)
         */
        arbol.vaciar();
        arbol.insertar(5);
        arbol.insertar(12);
        arbol.insertar(8);
        // arbol.mostrarArbol();

        System.out.println("\nROTACION DOBLE DERECHA-IZQUIERDA - EJEMPLO 2");
        /*
         * 5 (-2)
         * / \
         * 2 (0) 12 (1)
         * / \
         * 8 (1) 14 (0)
         * /
         * 7 (0)
         */
        arbol.vaciar();
        arbol.insertar(5);
        arbol.insertar(2);
        arbol.insertar(12);
        arbol.insertar(8);
        arbol.insertar(14);
        arbol.insertar(7);
        // arbol.mostrarArbol();

        // Separador
        System.out.println("\n***********************************************************************");
        System.out.println("***********************************************************************");

        // Rotacion Doble izquierda-derecha
        System.out.println("\nROTACION DOBLE IZQUIERDA-DERECHA - EJEMPLO 1");
        /*
         * 12 (2)
         * /
         * 5 (-1)
         * \
         * 8 (0)
         */
        arbol.vaciar();
        arbol.insertar(12);
        arbol.insertar(5);
        arbol.insertar(8);
        // arbol.mostrarArbol();

        System.out.println("\nROTACION DOBLE IZQUIERDA-DERECHA - EJEMPLO 2");
        /*
         * 15 (2)
         * / \
         * 4 (-1) 20 (0)
         * / \
         * 2 (0) 8 (-1)
         * \
         * 10 (0)
         */
        arbol.vaciar();
        arbol.insertar(15);
        arbol.insertar(4);
        arbol.insertar(20);
        arbol.insertar(2);
        arbol.insertar(8);
        arbol.insertar(10);
        // arbol.mostrarArbol();
    }
}
