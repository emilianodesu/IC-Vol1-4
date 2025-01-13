import mx.unam.fi.poo.practica12.*;

public class Main {
    public static void main(String[] args) throws Exception {
        java.util.Scanner stdin = new java.util.Scanner(System.in);
        int m, n;
        m = stdin.nextInt();
        n = stdin.nextInt();

        int m1[][] = new int[m][n];
        int m2[][] = new int[m][n];

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                m1[i][j] = stdin.nextInt();
            }
        }

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                m2[i][j] = stdin.nextInt();
            }
        }
        stdin.close();
        Hilo.setMatrices(m, n, m1, m2);
        new Hilo("Hilo 1", 1).start();
        new Hilo("Hilo 2", 2).start();
        new Hilo("Hilo 3", 3).start();
        new Hilo("Hilo 4", 4).start();
        Hilo.printSum();
    }
}
