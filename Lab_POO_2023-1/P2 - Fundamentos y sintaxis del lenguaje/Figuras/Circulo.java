public class Circulo {
    private final double PI = 3.1416;
    private double radio;
    
    public Circulo(double radio) {
        this.radio = radio;
    }

    public double perimetro() {
        return this.radio*2*this.PI;
    }

    public double area() {
        return this.PI*this.radio*this.radio;
    }
}
