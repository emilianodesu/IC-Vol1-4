public class Cuadrado {

	private double lado; /* Atributos
	*  ^       ^     ^
    *  Modificador de acceso, tipo de dato, nombre del atributo
	*/
	
	public Cuadrado (double lado) {
		this.lado = lado;
	}
	public double perimetro() {
		return (this.lado*4);
	}

	public double area() {
		return (this.lado*this.lado);
	}
}