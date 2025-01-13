package mx.unam.fi.poo;

import java.util.Random;

/**
 * Esta clase representa polinomios de una sola variable con coeficientes
 * enteros.
 * 
 * @author Carlos Emiliano Mendoza Hernández
 * @version 26/09/2022
 */
public class Polynomial {
    // Atributos
    /**
     * Grado del polinomio.
     */
    private int degree;

    /**
     * Arreglo que contiene los coeficientes (enteros) del polinomio. El elemento de
     * la posición k es el coeficiente de la k-ésima potencia de x. El grado máximo
     * de un polinomio permitido por esta clase es 9.
     */
    private int coeff[] = new int[10];

    // Constructores
    /**
     * Constructor vacío. Para uso exclusivo de los métodos de la clase.
     */
    private Polynomial() {
    } // Cierre del constructor

    /**
     * Constructor con dos parámetros. Se espera que el usuario utilice este
     * constructor.
     * 
     * @param degree Grado del polinomio.
     * @param coeff  Arreglo con números enteros donde la posición k es el
     *               coeficiente de la k-ésima potencia de x.
     */
    public Polynomial(int degree, int coeff[]) {
        this.degree = degree;
        this.coeff = coeff;
    } // Cierre del constructor

    /**
     * Constructor con un parámetro. Dado el grado del polinomio como argumento,
     * genera coeficientes aleatorios entre 1 y 10 (positivos y negativos) e
     * inicializa el arreglo de coeficientes con tales valores.
     * 
     * @param degree Grado del polinomio.
     */
    public Polynomial(int degree) {
        this.degree = degree;
        boolean sign = true;
        Random rand = new Random();
        for (int i = 0; i <= degree; i++) {
            sign = rand.nextInt(1, 3) == 1 ? true : false;
            coeff[i] = rand.nextInt(1, 10);
            coeff[i] *= sign == false ? -1 : 1;
        }
    } // Cierre del constructor

    // Métodos
    /**
     * Método para calcular el valor de una x dada en el polinomio.
     * 
     * @param x Valor que se evalúa en el polinomio.
     * @return Valor entero resultado de evaluar x en el polinomio.
     */
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
    } // Cierre del método

    /**
     * Método para multiplicar un polinomio por un escalar entero. No altera el
     * polinomio especificado pero devuelve otro polinomio resultado de la
     * operación. La multiplicación por el escalar 0 esta permitida. Es un método
     * estático y debe invocarse de tal forma.
     * 
     * @param poly Poliniomio.
     * @param r    Escalar que multilica al polinomio.
     * @return Poliniomio resultado de r*P(x).
     */
    public static Polynomial scalarProduct(Polynomial poly, int r) {
        Polynomial sProduct = new Polynomial();
        int degree = poly.degree;
        sProduct.degree = degree;
        sProduct.coeff = poly.coeff.clone();

        for (int i = 0; i <= degree; i++) {
            sProduct.coeff[i] *= r;
        }
        if (r == 0) {
            sProduct.degree = 0;
        }
        return sProduct;
    } // Cierre del método

    /**
     * Método para sumar dos polinomios. Devuelve un polinomio resultado de la suma
     * de los dos polinomios especificados. Es un método estático y debe invocarse
     * de tal forma.
     * 
     * @param poly1 Polinomio del primer sumando.
     * @param poly2 Polinomio del segundo sumando.
     * @return Resultado de la suma.
     */
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
        while (sum.coeff[sum.degree] == 0 && sum.degree != 0) {
            sum.degree--;
        }

        return sum;
    } // Cierre del método

    /**
     * Método para restar un polinomio de otro. Devuelve un polinomio resultado de
     * restar el segundo polinomio especificado al primero. Es un método estático y
     * debe invocarse de tal forma.
     * 
     * @param poly1 Polinomio del minuendo.
     * @param poly2 Polinomio del sustraendo.
     * @return Resultado de la diferencia
     */
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
        while (sub.coeff[sub.degree] == 0 && sub.degree != 0) {
            sub.degree--;
        }

        return sub;
    } // Cierre del método

    /*
     * Genera un String del polinomio en la forma (An)x^n+(An-1)x^n-1+...+(A3)x^3+(A2)x^2+(A1)x+A0.
     * 
     * @see java.lang.Object#toString()
     */
    @Override
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
    } // Cierre del método
} // Cierre de la clase
