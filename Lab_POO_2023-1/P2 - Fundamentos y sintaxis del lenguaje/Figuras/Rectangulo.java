public class Rectangulo {
    private double base;
    private double altura;

    public Rectangulo(double base, double altura) {
        this.base = base;
        this.altura = altura;
    }

    public double perimetro() {
        return this.base*2 + this.altura*2;
    }

    public double area() {
        return this.base * this.altura;
    }
}
