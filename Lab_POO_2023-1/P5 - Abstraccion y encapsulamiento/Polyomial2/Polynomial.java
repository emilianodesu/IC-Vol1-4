import java.util.Random;

public class Polynomial {
    //Atributos
    private int degree;
    private int coeff[] = new int[10];

    // Constructores
    public Polynomial() {
    }

    public Polynomial(int degree, int coeff[]) {
        this.degree = degree;
        this.coeff = coeff;
    }

    public Polynomial(int degree) {
        this.degree = degree;
        Random rand = new Random();
        for (int i = 0; i <= degree; i++) {
            this.coeff[i] = rand.nextInt(1, 10);
        }
    }

    //Métodos
    public int evaluate(int x) {
        int result = 0;
        int powX, degree = this.degree;

        for (int i = this.degree; i > 1; i--) {
            powX = x;
            for (int j = 2; j <= degree; j++) {
                powX *= x;
            }
            --degree;
            result += (this.coeff[i] * powX);
        }
        result += (this.coeff[1] * x + this.coeff[0]);

        return result;
    }

    public static Polynomial scalarProduct(Polynomial poly, int scalar) {
        Polynomial sProduct = new Polynomial();
        int degree = poly.degree;
        sProduct.degree = degree;
        sProduct.coeff = poly.coeff.clone();

        for (int i = 0; i <= degree; i++) {
            sProduct.coeff[i] *= scalar;
        }
        if (scalar == 0) {
            sProduct.degree = 0;
        }
        return sProduct;
    }

    public static Polynomial add(Polynomial poly1, Polynomial poly2) {
        Polynomial sum = new Polynomial();
        sum.degree = poly1.degree > poly2.degree ? poly1.degree : poly2.degree;
        int aux = poly1.degree > poly2.degree ? poly2.degree : poly1.degree;

        for (int i = 0; i <= aux; i++) {
            sum.coeff[i] = poly1.coeff[i] + poly2.coeff[i];
        }
        for (int i = aux + 1; i <= sum.degree; i++) {
            sum.coeff[i] = sum.degree == poly1.degree ? poly1.coeff[i] : poly2.coeff[i];
        }
        while (sum.coeff[sum.degree] == 0) {
            sum.degree--;
        }

        return sum;
    }

    public static Polynomial substract(Polynomial poly1, Polynomial poly2) {
        Polynomial sub = new Polynomial();
        sub.degree = poly1.degree > poly2.degree ? poly1.degree : poly2.degree;
        int aux = poly1.degree > poly2.degree ? poly2.degree : poly1.degree;

        for (int i = 0; i <= aux; i++) {
            sub.coeff[i] = poly1.coeff[i] - poly2.coeff[i];
        }
        for (int i = aux + 1; i <= sub.degree; i++) {
            sub.coeff[i] = sub.degree == poly1.degree ? poly1.coeff[i] : poly2.coeff[i] * -1;
        }
        while (sub.coeff[sub.degree] == 0) {
            sub.degree--;
        }

        return sub;
    }

    public String toString() {
        String poli = "";
        int degree = this.degree;

        switch (this.degree) {
            case 0:
                poli += this.coeff[0];
                return poli;

            case 1:
                if (this.coeff[1] < 0) {
                    poli += this.coeff[1] == -1 ? "-x" : this.coeff[1] + "x";
                } else if (this.coeff[1] > 0) {
                    poli += this.coeff[1] == 1 ? "x" : this.coeff[1] + "x";
                }
                if (this.coeff[0] < 0) {
                    poli += this.coeff[0];
                } else if (this.coeff[0] > 0) {
                    poli += "+" + this.coeff[0];
                }
                return poli;

            default:
                if (this.coeff[this.degree] < 0) {
                    poli += this.coeff[this.degree] == -1 ? "-x^" + degree : this.coeff[this.degree] + "x^" + degree;
                    --degree;
                } else if (this.coeff[this.degree] > 0) {
                    poli += this.coeff[this.degree] == 1 ? "x^" + degree : this.coeff[this.degree] + "x^" + degree;
                    --degree;
                }

                for (int i = this.degree - 1; i > 1; i--) {
                    if (this.coeff[i] < 0) {
                        poli += this.coeff[i] == -1 ? "-x^" + degree : this.coeff[i] + "x^" + degree;
                        --degree;
                    } else if (this.coeff[i] > 0) {
                        poli += "+";
                        poli += this.coeff[i] == 1 ? "x^" + degree : this.coeff[i] + "x^" + degree;
                        --degree;
                    }
                }

                if (this.coeff[1] < 0) {
                    poli += this.coeff[1] == -1 ? "-x" : this.coeff[1] + "x";
                } else if (this.coeff[1] > 0) {
                    poli += "+";
                    poli += this.coeff[1] == 1 ? "x" : this.coeff[1] + "x";
                }
                if (this.coeff[0] < 0) {
                    poli += this.coeff[0];
                } else if (this.coeff[0] > 0) {
                    poli += "+" + this.coeff[0];
                }
                return poli;
        }
    }
}
