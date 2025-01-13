import java.util.Scanner;

public class Main {
    /**
     * Realiza un programa en Java que reciba n cantidad de números, posteriormente los sume y regrese su resultado.
     * @param args
     */
    public static void main(String[] args) {
        Scanner entrada = new Scanner(System.in);
        if (entrada.hasNextInt()) {
            int sumaInt = 0, valorInt = 0;
            while (entrada.hasNext()) {
                valorInt = entrada.nextInt();
                sumaInt += valorInt;
            }
            System.out.println(sumaInt);
        } else {
            Double sumaDouble = 0., valorDouble = 0.;
            while (entrada.hasNext()) {
                valorDouble = entrada.nextDouble();
                sumaDouble += valorDouble;
            }
            System.out.println(sumaDouble);
        }
        entrada.close();
    }
}
