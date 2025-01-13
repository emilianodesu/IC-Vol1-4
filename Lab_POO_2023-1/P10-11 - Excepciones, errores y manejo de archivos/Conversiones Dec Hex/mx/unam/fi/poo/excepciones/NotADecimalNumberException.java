package mx.unam.fi.poo.excepciones;

public class NotADecimalNumberException extends Exception {
    public NotADecimalNumberException() {
        super("EL FORMATO NO CORRESPONDE A UN NUMERO DECIMAL");
    }
}
