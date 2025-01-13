public class PruebaDos {
    public static void main(String[] args) {
        ArbolAVL arbolito = new ArbolAVL();
        arbolito.insertar(1);
        arbolito.insertar(2);
        arbolito.insertar(1);
        arbolito.breadthFrist();
    }
}
