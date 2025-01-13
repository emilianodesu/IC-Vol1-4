public class Rombo {
    private double diagonalMayor;
    private double diagonalMenor;
    private double lado;

    public Rombo(double lado, double diagonalMayor, double diagonalMenor) {
        this.lado = lado;
        this.diagonalMayor = diagonalMayor;
        this.diagonalMenor = diagonalMenor;
    }

    public double perimetro() {
        return this.lado*4;
    }

    public double area() {
        return (diagonalMayor*diagonalMenor)/2;
    }
    
}
