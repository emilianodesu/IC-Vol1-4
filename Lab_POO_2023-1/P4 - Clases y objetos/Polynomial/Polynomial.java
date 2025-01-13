import java.util.ArrayList;
import java.util.Random;

public class Polynomial {
    private int degree;
    private ArrayList<Integer> coeff;

    public Polynomial() {
        this.degree = 0;
        ArrayList<Integer> cero = new ArrayList<Integer>();
        cero.add(0);
        this.coeff = cero;
    }

    public Polynomial(int degree) {
        this.degree = degree;
        Random rand = new Random();
        ArrayList<Integer> rands = new ArrayList<Integer>();
        for (int i = 0; i <= degree; i++) {
            rands.add(rand.nextInt(10));
        }
        this.coeff = rands;
    }

    public Polynomial(int degree, ArrayList<Integer> coeff) {
        this.degree = degree;
        this.coeff = coeff;
    }

    public int evaluate(int x) {
        int result = 0;
        int powX, degree = this.degree;

        for (int i = this.degree; i > 1; i--) {
            powX = x;
            for (int j = 2; j <= degree; j++) {
                powX *= x;
            }
            --degree;
            result += (this.coeff.get(i) * powX);
        }
        result += (this.coeff.get(1) * x + this.coeff.get(0));

        return result;
    }

    public Polynomial add(Polynomial anotherPolynomial) {
        ArrayList<Integer> sumCoeff = new ArrayList<Integer>();
        int max = this.degree > anotherPolynomial.degree ? this.degree : anotherPolynomial.degree;
        int sumDegree = max;

        for (int i = 0; i <= max; i++) {
            sumCoeff.add(0);
        }

        if (this.degree > anotherPolynomial.degree) {
            for (int i = 0; i <= anotherPolynomial.degree; i++) {
                sumCoeff.remove(i);
                sumCoeff.add(i, this.coeff.get(i) + anotherPolynomial.coeff.get(i));
            }
            for (int i = anotherPolynomial.degree + 1; i <= this.degree; i++) {
                sumCoeff.remove(i);
                sumCoeff.add(i, this.coeff.get(i));
            }
        } else if (anotherPolynomial.degree > this.degree) {
            for (int i = 0; i <= this.degree; i++) {
                sumCoeff.remove(i);
                sumCoeff.add(i, this.coeff.get(i) + anotherPolynomial.coeff.get(i));
            }
            for (int i = this.degree + 1; i <= anotherPolynomial.degree; i++) {
                sumCoeff.remove(i);
                sumCoeff.add(i, anotherPolynomial.coeff.get(i));
            }
        } else {
            for (int i = 0; i <= sumDegree; i++) {
                sumCoeff.remove(i);
                sumCoeff.add(i, this.coeff.get(i) + anotherPolynomial.coeff.get(i));
            }
        }

        int index = max;
        while (sumCoeff.get(index--) == 0) {
            sumDegree--;
        }

        Polynomial sum = new Polynomial(sumDegree, sumCoeff);

        return sum;
    }

    public Polynomial substract(Polynomial anotherPolynomial) {
        ArrayList<Integer> subCoeff = new ArrayList<Integer>();
        int max = this.degree > anotherPolynomial.degree ? this.degree : anotherPolynomial.degree;
        int subDegree = max;

        for (int i = 0; i <= max; i++) {
            subCoeff.add(0);
        }

        if (this.degree > anotherPolynomial.degree) {
            for (int i = 0; i <= anotherPolynomial.degree; i++) {
                subCoeff.remove(i);
                subCoeff.add(i, this.coeff.get(i) - anotherPolynomial.coeff.get(i));
            }
            for (int i = anotherPolynomial.degree + 1; i <= this.degree; i++) {
                subCoeff.remove(i);
                subCoeff.add(i, this.coeff.get(i) * -1);
            }
        } else if (anotherPolynomial.degree > this.degree) {
            for (int i = 0; i <= this.degree; i++) {
                subCoeff.remove(i);
                subCoeff.add(i, this.coeff.get(i) - anotherPolynomial.coeff.get(i));
            }
            for (int i = this.degree + 1; i <= anotherPolynomial.degree; i++) {
                subCoeff.remove(i);
                subCoeff.add(i, anotherPolynomial.coeff.get(i) * -1);
            }
        } else {
            for (int i = 0; i <= subDegree; i++) {
                subCoeff.remove(i);
                subCoeff.add(i, this.coeff.get(i) - anotherPolynomial.coeff.get(i));
            }
        }

        int index = max;
        while (subCoeff.get(index--) == 0) {
            subDegree--;
        }

        Polynomial sub = new Polynomial(subDegree, subCoeff);

        return sub;
    }

    public String toString() {
        String poli = "";
        int grado = this.degree;

        if (this.coeff.get(this.degree) < 0) {
            poli += this.coeff.get(this.degree) == -1 ? "-x^" + grado : this.coeff.get(this.degree) + "x^" + grado;
            --grado;
        } else if (this.coeff.get(this.degree) > 0) {
            poli += this.coeff.get(this.degree) == 1 ? "x^" + grado : this.coeff.get(this.degree) + "x^" + grado;
            --grado;
        }

        for (int i = this.degree - 1; i > 1; i--) {
            if (this.coeff.get(i) < 0) {
                poli += this.coeff.get(i) == -1 ? "-x^" + grado : this.coeff.get(i) + "x^" + grado;
                --grado;
            } else if (this.coeff.get(i) > 0) {
                poli += "+";
                poli += this.coeff.get(i) == 1 ? "x^" + grado : this.coeff.get(i) + "x^" + grado;
                --grado;
            }
        }

        if (this.coeff.get(1) < 0) {
            poli += "-x";
        } else if (this.coeff.get(1) > 0) {
            poli += "+";
            poli += this.coeff.get(1) == 1 ? "x" : this.coeff.get(1) + "x";
        }

        if (this.coeff.get(0) < 0) {
            poli += this.coeff.get(0);
        } else if (this.coeff.get(0) > 0) {
            poli += "+" + this.coeff.get(0);
        }
        
        return poli;
    }
}
