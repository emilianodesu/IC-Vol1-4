package mx.unam.fi.poo.excepciones;

public class InvalidHexException extends Exception {
    public InvalidHexException() {
        super("EL FORMATO NO CORRESPONDE A UN NUMERO HEXADECIMAL");
    }
}
