import java.util.Scanner;
import java.util.ArrayList;

public class Main {
    /**
     * En esta práctica deberás implementar la clase Polynomial para representar polinomios de una sola variable.
     * @param args
     */
    public static void main(String[] args) {
        Scanner stdin = new Scanner(System.in);
        ArrayList<Integer> coeff1 = new ArrayList<Integer>();
        ArrayList<Integer> coeff2 = new ArrayList<Integer>();
        int degree1 = 0, degree2 = 0, x = 0;

        for (int i = 0; i <= 5; i++) {
            coeff1.add(0);
            coeff2.add(0);
        }

        degree1 = stdin.nextInt();
        for (int i = degree1; i >= 0; i--) {
            coeff1.remove(i);
            coeff1.add(i, stdin.nextInt());
        }
        degree2 = stdin.nextInt();
        for (int i = degree2; i >= 0; i--) {
            coeff2.remove(i);
            coeff2.add(i, stdin.nextInt());
        }

        x = stdin.nextInt();
        stdin.close();

        Polynomial poli1 = new Polynomial(degree1, coeff1);
        Polynomial poli2 = new Polynomial(degree2, coeff2);
        Polynomial sum = poli1.add(poli2);
        Polynomial dif = poli1.substract(poli2);
        System.out.println(sum.toString());
        System.out.println(sum.evaluate(x));
        System.out.println(dif.toString());
        System.out.println(dif.evaluate(x));
    }
}
