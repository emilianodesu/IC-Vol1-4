import java.text.SimpleDateFormat;
import java.util.Calendar;
import java.util.Date;
import java.time.*;

public class Fechas {
    public static void main(String[] args) {
        Date fecha = new Date();
        System.out.println(fecha.toString());
        SimpleDateFormat formateador = new SimpleDateFormat("dd-MM-yyy");
        System.out.println(formateador.format(fecha));

        Calendar calendario = Calendar.getInstance();
        String miFecha = "Hoy es dia ";
        miFecha += calendario.get(Calendar.DAY_OF_MONTH) + " del mes ";
        miFecha += calendario.get(Calendar.MONTH) + 1 + " de ";
        miFecha += calendario.get(Calendar.YEAR);
        System.out.println(miFecha);

        LocalDate hoy = LocalDate.now();
        System.out.println(hoy);
        System.out.println(hoy.plusWeeks(1));
    }
}
