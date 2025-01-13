package mx.unam.fi.poo.excepciones;

public class NotANumberException extends Exception {

    public NotANumberException() {
        super("EL FORMATO NO CORRESPONDE A UN NUMERO");
    }
}
