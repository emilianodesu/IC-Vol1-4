package mx.unam.fi.poo.practica12;

public class Hilo extends Thread {
    private int num;
    private static int m;
    private static int n;
    private static int[][] m1;
    private static int[][] m2;
    private static int[][] res;

    public Hilo(String nombre, int num) {
        super(nombre);
        this.num = num;
    }

    public static void setMatrices(int m, int n, int[][] m1, int[][] m2) {
        Hilo.m = m;
        Hilo.n = n;
        Hilo.m1 = m1;
        Hilo.m2 = m2;
        res = new int[m][n];
    }

    public void run() {
        switch (num) {
            case 1:
                for (int i = 0; i < m / 2; i++) {
                    for (int j = 0; j < n / 2; j++) {
                        res[i][j] = m1[i][j] + m2[i][j];
                    }
                }
                break;

            case 2:
                for (int i = 0; i < m / 2; i++) {
                    for (int j = n / 2; j < n; j++) {
                        res[i][j] = m1[i][j] + m2[i][j];
                    }
                }
                break;

            case 3:
                for (int i = m / 2; i < m; i++) {
                    for (int j = 0; j < n / 2; j++) {
                        res[i][j] = m1[i][j] + m2[i][j];
                    }
                }
                break;

            case 4:
                for (int i = m / 2; i < m; i++) {
                    for (int j = n / 2; j < n; j++) {
                        res[i][j] = m1[i][j] + m2[i][j];
                    }
                }
                break;

            default:
                System.out.println("Lo siento. El numero que ingresaste no es válido.");
                break;
        }
    }

    public static void printSum() {
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                System.out.print(res[i][j] + " ");
            }
            System.out.println();
        }
    }

}