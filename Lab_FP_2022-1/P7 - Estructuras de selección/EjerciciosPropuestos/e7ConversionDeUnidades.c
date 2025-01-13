/*
 *  7. Construye un diagrama de flujo y el correspondiente programa en C que permita realizar
 *     la conversión de medidas de peso, longitud y volumen, de acuerdo con la tabla. Se debe
 *     escribir el valor a convertir, la medida en que está expresado el valor, el nuevo valor
 *     y la nueva medida correspondiente.
 *  
 *     Medidas de longitud               Medidas de volumen              Medidas de peso
 *  
 *     1 pulgada = 25.40 mm              1 pie^3 = 0.02832 m^3           1 onza = 28.35 g
 *     1 yarda = 0.9144 m                1 yarda^3 = 0.7646 m^3          1 libra = 0.45359 kg
 *     1 milla = 1.6093 km               1 pinta = 0.56826 l             1 ton. inglesa = 1.016 ton
 *     1 pulgada^2 = 6.452 cm^2          1 galón = 4.54609 l
 *     1 pie^2 = 0.09290 metros^2
 *     1 yarda^2 = 0.08361 metros^2
 *     1 acre = 0.4047 ha
 *     1 milla^2 = 2.59 km^2
 */
#include <stdio.h>
// Enumeraciones para identificar las opciones elegidas por el usuario
//(se usaran como variables de control en los switch)
enum cantidad{
    LONGITUD,
    VOLUMEN,
    PESO
};
enum volumen{
    PIE3,
    YARDA3,
    PINTA,
    GALON
};
enum peso{
    ONZA,
    LIBRA,
    TON_INGLESA
};
enum longitud{
    PULGADA,
    YARDA,
    MILLA,
    PULGADA2,
    PIE2,
    YARDA2,
    ACRE,
    MILLA2
};

int opc;    // Guarda la opcion elegida por el usuario
int um_i;   // Guarda la opcion de unidad de medida inicial (la que se va a convertir)
float cant; // Guarda la magnitud que se desea convertir

int main(){
    printf("Ingrese la opcion que desea para convertir:\n\t1)Longitud\n\t2)Volumen\n\t3)Peso\n");
    scanf("%d",&opc); //Lee la opcion del usuario (Volumen, peso o longitud)
    switch (opc - 1){
        case LONGITUD: // Se ejecuta si el usuario eligio Longitud
            printf("Ingresa la cantidad que desea convertir: ");
            scanf("%f", &cant);
            printf("Selecciona la unidad de medida inicial:\n\t1)pulgada\n\t2)yarda\n\t3)milla\n\t4)pulgada^2\n\t5)pie^2\n\t6)yarda^2\n\t7)acre\n\t8)milla^2\n");
            scanf("%i",&um_i);
            switch (um_i - 1){ // Ejecuta las lineas de codigo segun la opcion elegida
                case PULGADA:
                    printf("El valor de %f pulgadas = %f mm", cant, cant * 25.4);
                    break;
                case YARDA:
                    printf("El valor de %f yardas = %f m", cant, cant * 0.9144);
                    break;
                case MILLA:
                    printf("El valor de %f millas = %f km", cant, cant * 1.6093);
                    break;
                case PULGADA2:
                    printf("El valor de %f pulgadas^2 = %f cm^2", cant, cant * 6.452);
                    break;
                case PIE2:
                    printf("El valor de %f pies^2 = %f m^2", cant, cant * 0.0929);
                    break;
                case YARDA2:
                    printf("El valor de %f yardas^2 = %f m^2", cant, cant * 0.8361);
                    break;
                case ACRE:
                    printf("El valor de %f acres = %f hectareas", cant, cant * 0.4047);
                    break;
                case MILLA2:
                    printf("El valor de %f millas^2 = %f km^2", cant, cant * 2.59);
                    break;
            }
            break;
        case VOLUMEN: // Se ejecuta si el usuario eligio Volumen
            printf("Ingresa la cantidad que desea convertir: ");
            scanf("%f", &cant);
            printf("Selecciona la unidad de medida inicial:\n\t1)pie^3\n\t2)yarda^3\n\t3)pinta\n\t4)galon\n");
            scanf("%i",&um_i);
            switch (um_i - 1){ // Ejecuta las lineas de codigo segun la opcion elegida
                case PIE3:
                    printf("El valor de %f pies^3 = %f m^3", cant, cant * 0.02832);
                    break;
                case YARDA3:
                    printf("El valor de %f yardas^3 = %f m^3", cant, cant * 0.7646);
                    break;
                case PINTA:
                    printf("El valor de %f pintas = %f litros", cant, cant * 0.56826);
                    break;
                case GALON:
                    printf("El valor de %f galones = %f litros", cant, cant * 4.54609);
                    break;
            }
            break;
        case PESO: // Se ejecuta si el usuario eligio Peso
            printf("Ingresa la cantidad que desea convertir: ");
            scanf("%f", &cant);
            printf("Selecciona la unidad de medida inicial:\n\t1)onza\n\t2)libra\n\t3)tonelada inglesa\n\t");
            scanf("%i",&um_i);
            switch (um_i - 1){ // Ejecuta las lineas de codigo segun la opcion elegida
                case ONZA:
                    printf("El valor de %f onzas = %f gramos", cant, cant * 28.35);
                    break;
                case LIBRA:
                    printf("El valor de %f libras = %f kg", cant, cant * 0.45359);
                    break;
                case TON_INGLESA:
                    printf("El valor de %f ton. inglesa = %f toneladas", cant, cant * 1.0160);
                    break;
            }
            break;
        default: // Se ejecuta si el usuario eligio una opcion que no pertenece a ninguna de las posibles
            printf("La opcion ingresada no es valida.");
            break;
    }
    return 0;
}