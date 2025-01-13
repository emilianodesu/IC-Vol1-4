import java.util.ArrayList;
import java.util.Collections;

public class MiArreglo { 
    private ArrayList<String> palabras; 

    public MiArreglo(ArrayList<String> palabras) { 
        this.palabras = palabras;
    }

    /*Metodos */
    public int tamano() { 
        return this.palabras.size();
    }

    public String ordenar() {
        String ordenadas = "";
        Collections.sort(this.palabras);
        for (int i = 0; i < this.palabras.size(); i++) {
        ordenadas += this.palabras.get(i) + " ";
        }
        return ordenadas;
    }

    public int busquedaMayor() {
            int index = -1;
            int aux = 0;
            for (int i = 0; i < this.palabras.size(); i++) {
                if ((this.palabras.get(i)).length() > aux) {
                    aux = (this.palabras.get(i)).length();
                    index = i;
                }
            }
        return index;
    }
}
