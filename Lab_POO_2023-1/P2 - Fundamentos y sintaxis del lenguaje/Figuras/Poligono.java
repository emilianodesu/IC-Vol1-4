public class Poligono {
    private int numLados;
    private double lado;
    private double apotema;

    public Poligono(int numLados, double lado, double apotema) {
        this.numLados = numLados;
        this.lado = lado;
        this.apotema = apotema;
    }

    public double perimetro() {
        return this.numLados * this.lado;
    }

    public double area() {
        return (this.perimetro()*this.apotema)/2;
    }
}
