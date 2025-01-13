package mx.unam.fi.poo.excepciones;

public class NegativeValueEnteredException extends Exception {
    public NegativeValueEnteredException() {
        super("LOS NUMEROS NEGATIVOS NO SON ACEPTADOS");
    }
}
