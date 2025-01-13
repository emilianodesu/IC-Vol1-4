package mx.unam.fi.poo.excepciones;

import java.util.regex.Pattern;

public class Conversiones {

    public static int hexToDec(String hexString)
            throws NegativeValueEnteredException, InvalidHexException, NotANumberException, NotADecimalNumberException {

        if (Pattern.matches("^[^\\d]+$", hexString))
            throw new NotANumberException();

        if (Pattern.matches("^-0[xX][A-F\\d]+$", hexString))
            throw new NegativeValueEnteredException();

        if (Pattern.matches("^(?!0x|0X).+$", hexString))
            throw new NotADecimalNumberException();

        if (Pattern.matches("^0[xX]-[A-F\\d]+$", hexString))
            throw new NegativeValueEnteredException();

        if (!Pattern.matches("^0[Xx][A-F\\d]+$", hexString))
            throw new InvalidHexException();

        hexString = hexString.substring(2);
        int dec = Integer.parseInt(hexString, 16);
        return dec;
    }

    public static String decToHex(int dec) throws NegativeValueEnteredException {
        if (dec < 0)
            throw new NegativeValueEnteredException();
        String hexString = Integer.toHexString(dec);
        return "0X" + hexString.toUpperCase();
    }
}
