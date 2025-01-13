public interface InstrumentoMusical {

    // Por defecto, todos los métodos definidos dentro de
    // una interfaz son publicos (public) y abstractos (abstract)

    void tocar();
    void afinar();
    String tipoInstrumento();
}

public class  InstrumentoViento extends Object implements InstrumentoMusical{
    
    // Por defecto, todos los métodos de la interfaz son públicos,
    // por lo tanto, así se deben implementar

    public void tocar() {
        System.out.println("Tocando instrumento de viento.");
    }

    public void afinar() {
        System.out.println("Afinando instrumento de viento.");
    }

    public String tipoInstrumento() {
        return "Instrumento de viento"
    }
}

public class Flauta extends InstrumentoViento {

    // La clase flauta puede sobrescribir algún método
    public String tipoInstrumento() {
        return "Flauta";
    }
}

public class PruebaInstrumento {
    public static void main(String[] args) {

        // Se puede crear una referencia de una interfaz
        InstrumentoMusical = instrumento;

        // Pero no es posible crear una instancia de una interfaz
        // instrumento = new InstrumentoMusical();

        // Una referencia a interfaz puede ser asignada a cualquier
        // objeto que la implemente

        instrumento = new Flauta();
        instrumento.tocar();
        System.out.println(instrumento.tipoInstrumento());
    }
}
