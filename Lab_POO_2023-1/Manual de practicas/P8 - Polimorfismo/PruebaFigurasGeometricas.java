public class PruebaFigurasGeometricas {
    public static void main(String[] args) {
        // No se pueden crear objetos de clases abstractas
        // Poligono poligono = new Poligono();
        Poligono poligono;

        // Una referencia puede ser reasignada a otros objetos
        // Una referencia de una clase abstracta sí
        // puede almacenar un objeto de una clase concreta
        poligono = new Triangulo();
        System.out.println(poligono);
        poligono = new Cuadrilatero();
        System.out.println(poligono);

        // Solo se pueden ejecutar los métodos que están definidos
        // en la referencia, sin embargo, se ejecutarán como están
        // implementados en la instancia.
        // El método toString se puede ejecutar porque esta definido
        // en Poligono, sin embargo, se va a ejecutar como está
        // implementado en la instancia (Cuadrilatero en este caso).
        System.out.println(poligono);
        // El metodo setBase no está  definido en Poligono, por lo tanto,
        // la siguiente instrucción marcaría un error:
        // poligono.setBase(5.5);
    }
}
