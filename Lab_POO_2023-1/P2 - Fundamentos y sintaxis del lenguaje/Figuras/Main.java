import java.util.Scanner;

public class Main {
    /**
     *  Crea un programa en java que calcule el perímetro y el área de las figuras geométricas básicas.
     *
     *  En las pruebas se te proporcionará una letra indicando que tipo de figura deberás instanciar. Las letras usadas son las siguientes:
     *
     *  Triángulo - T
     *  Cuadrado - S
     *  Rectángulo - R
     *  Rombo - A
     *  Romboide - B
     *  Trapecio - D
     *  Polígono regular - P
     *  Circulo - C
     *  
     *  Posterior a eso deberás leer los atributos de cada uno de estos objetos, todos serán números reales.
     * @param args
     */
    public static void main(String[] args) {
        int numLados;
        double radio;
        double apotema = 0;
        double lado = 0; //---------------------------------------------Aqui la declaro
        double lado1 = 0, lado2 = 0, base = 0, altura = 0;
        double diagonalMayor = 0, diagonalMenor = 0;
        double baseMayor = 0, baseMenor = 0;
        String letra;

        Scanner stdin = new Scanner(System.in);
        letra = stdin.next();
        switch (letra) {
            case "S":
                lado = stdin.nextDouble();
                Cuadrado unCuadrado = new Cuadrado(lado); //----------- Llamo al constructor
                /*                                   ^
                *                                  Aquí uso la variable que declaré en el main
                */
            


                System.out.println("PERIMETRO: " + unCuadrado.perimetro());
                System.out.println("AREA: " + unCuadrado.area());
                break;
            
            case "T":
                lado1 = stdin.nextDouble();
                lado2 = stdin.nextDouble();
                base = stdin.nextDouble();
                altura = stdin.nextDouble();
                Triangulo unTriangulo = new Triangulo(lado1, lado2, base, altura);
                System.out.println("PERIMETRO: " + unTriangulo.perimetro());
                System.out.println("AREA: " + (int)unTriangulo.area());
                break;
            
            case "R":
                base = stdin.nextDouble();
                altura = stdin.nextDouble();
                Rectangulo unRectangulo = new Rectangulo(base, altura);
                System.out.println("PERIMETRO: " + unRectangulo.perimetro());
                System.out.println("AREA: " + unRectangulo.area());
                break;

            case "A":
                lado = stdin.nextDouble();
                diagonalMayor = stdin.nextDouble();
                diagonalMenor = stdin.nextDouble();
                Rombo unRombo = new Rombo(lado, diagonalMayor, diagonalMenor);
                System.out.println("PERIMETRO: " + unRombo.perimetro());
                System.out.println("AREA: " + String.format("%.1f", unRombo.area()));
                break;

            case "B":
                base = stdin.nextDouble();
                altura = stdin.nextDouble();
                lado = stdin.nextDouble();
                Romboide unRomboide = new Romboide(base, altura, lado);
                System.out.println("PERIMETRO: " + (int)unRomboide.perimetro());
                System.out.println("AREA: " + (int)unRomboide.area());
                break;

            case "D":
                baseMayor = stdin.nextDouble();
                baseMenor = stdin.nextDouble();
                altura = stdin.nextDouble();
                lado = stdin.nextDouble();
                Trapecio unTrapecio = new Trapecio(baseMayor, baseMenor, altura, lado);
                System.out.println("PERIMETRO: " + unTrapecio.perimetro());
                System.out.println("AREA: " + (int)unTrapecio.area());
                break; 
        
            case "P":
                numLados = stdin.nextInt();
                lado = stdin.nextDouble();
                apotema = stdin.nextDouble();
                Poligono unPoligono = new Poligono(numLados, lado, apotema);
                System.out.println("PERIMETRO: " + (int)unPoligono.perimetro());
                System.out.println("AREA: " + unPoligono.area());
                break;

            case "C":
                radio = stdin.nextDouble();
                Circulo unCirculo = new Circulo(radio);
                System.out.println("PERIMETRO: " + String.format("%.1f", unCirculo.perimetro()));
                System.out.println("AREA: " + Math.floor(unCirculo.area()*100)/100);
                break;

            default:
            System.out.println("Letra invalida");
                break;
        }
        stdin.close();
    }
}
