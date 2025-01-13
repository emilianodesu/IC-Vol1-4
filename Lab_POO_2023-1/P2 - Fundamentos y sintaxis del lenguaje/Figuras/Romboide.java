public class Romboide {
    private double base;
    private double altura;
    private double lado;

    public Romboide(double base, double altura, double lado) {
        this.base = base;
        this.altura = altura;
        this.lado = lado;
    }

    public double perimetro() {
        return this.base*2 + this.lado*2;
    }

    public double area() {
        return this.base*this.altura;
    }
}
