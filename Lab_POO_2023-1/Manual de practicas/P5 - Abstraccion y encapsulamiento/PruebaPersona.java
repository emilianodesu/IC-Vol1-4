public class PruebaPersona {
    public static void main(String[] args) {
        Persona per1 = new Persona();
        per1.setNombre("Juan");
        per1.setApellido("Perez");
        per1.setfNacimiento(15, 8, 1950);
        System.out.println("Nombre : " + per1.getNombre());
        System.out.println("Apellido : " + per1.getApellido());
        System.out.println("Fecha Nacimiento : " + per1.getfNacimiento());
    }
}
