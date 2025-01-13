public class Trapecio {
    private double baseMayor;
    private double baseMenor;
    private double altura;
    private double lado;

    public Trapecio(double baseMayor, double baseMenor, double altura, double lado) {
        this.baseMayor = baseMayor;
        this.baseMenor = baseMenor;
        this.altura = altura;
        this.lado = lado;
    }

    public double perimetro() {
        return this.baseMayor + this.baseMenor + 2*this.lado;
    }

    public double area() {
        return ((this.baseMayor + this.baseMenor)*this.altura)/2;
        
    }
}
