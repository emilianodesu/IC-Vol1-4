import mx.unam.fi.poo.Polynomial;
import java.util.Scanner;
import java.util.ArrayList;

public class Main {
    public static void main(String[] args) {
        Scanner stdin = new Scanner(System.in);
        int degree1 = 0, degree2 = 0, x = 0, y = 0;
        int coeff1[] = new int[10];
        int coeff2[] = new int[10];

        degree1 = stdin.nextInt();
        for (int i = degree1; i >= 0; i--) {
            coeff1[i] = stdin.nextInt();
        }
        degree2 = stdin.nextInt();
        for (int i = degree2; i >= 0; i--) {
            coeff2[i] = stdin.nextInt();
        }
        x = stdin.nextInt();
        y = stdin.nextInt();
        stdin.close();

        ArrayList<Polynomial> polynomials = new ArrayList<Polynomial>();
        Polynomial poly1 = new Polynomial(degree1, coeff1);
        Polynomial poly2 = new Polynomial(degree2, coeff2);
        polynomials.add(poly1);
        polynomials.add(poly2);
        polynomials.add(Polynomial.add(poly1, poly2));
        polynomials.add(Polynomial.substract(poly1, poly2));
        polynomials.add(Polynomial.scalarProduct(poly1, y));
        polynomials.add(Polynomial.scalarProduct(poly2, y));

        for (int i = 0; i < polynomials.size(); i++) {
            System.out.println(polynomials.get(i).toString());
        }
        System.out.println(polynomials.get(2).evaluate(x));
        System.out.println(polynomials.get(3).evaluate(x));
    }
}
