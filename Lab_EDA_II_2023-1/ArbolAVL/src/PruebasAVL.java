public class PruebasAVL {
    public static void main(String[] args) {
        ArbolAVL arbolito = new ArbolAVL();

        arbolito.insertar(65);
        arbolito.insertar(50);
        arbolito.insertar(23);
        arbolito.insertar(70);
        arbolito.insertar(82);
        arbolito.insertar(68);
        arbolito.insertar(39);
        arbolito.insertar(10);
        arbolito.insertar(43);
        arbolito.insertar(59);
        arbolito.insertar(66);

        arbolito.breadthFrist();
        // arbolito.mostrarArbol();
        System.out.println();

        arbolito.eliminar(82);
        arbolito.eliminar(10);
        arbolito.eliminar(39);
        arbolito.eliminar(65);
        arbolito.eliminar(70);
        arbolito.eliminar(23);
        arbolito.eliminar(50);
        arbolito.eliminar(43);

        arbolito.breadthFrist();
        System.out.println();
        arbolito.vaciar();

        arbolito.insertar(58);
        arbolito.insertar(43);
        arbolito.insertar(75);
        arbolito.insertar(86);
        arbolito.insertar(65);
        arbolito.insertar(70);
        arbolito.insertar(67);
        arbolito.insertar(73);
        arbolito.insertar(93);
        arbolito.insertar(69);
        arbolito.insertar(25);
        arbolito.insertar(66);
        arbolito.insertar(68);
        arbolito.insertar(47);
        arbolito.insertar(62);
        arbolito.insertar(10);
        arbolito.insertar(60);

        // arbolito.mostrarArbol();
        arbolito.breadthFrist();
    }
}
