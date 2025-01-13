/*
*  6. Escribir un algoritmo que acepte una calificacion numerica de un estudiante (0-100),
*     convierta esta calificacion a su equivalente en letra y visualice la calificacion
*     correspondiente en letra.
*
*     Grado numerico                        Grado en letra
*     Mayor o igual a 90                        A
*     Menor de 90 pero mayor o igual a 80       B
*     Menor de 80 pero mayor o igual a 70       C
*     Menor de 70 pero mayor o igual a 69       D
*     Menor de 69                               F
*/

#include <stdio.h>

int main(){
    float grado;
    printf("Ingrese la calificacion (1-100): ");
    scanf("%f", &grado);
    if (grado < 69)
        printf("La calificacion es: F");
    else if (grado >= 69 && grado < 70)
        printf("La calificacion es: D");
    else if (grado >= 70 && grado < 80)
        printf("La calificacion es: C");
    else if (grado >= 80 && grado < 90)
        printf("La calificacion es: B");
    else if (grado >= 90 && grado <= 100)
        printf("La calificacion es: A");
    return 0;
}