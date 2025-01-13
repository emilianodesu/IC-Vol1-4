/*
*  5. Escribir un programa que acepte un ángulo en grados y visualice el tipo de ángulo correspondiente
*     (agudo, recto, obtuso)
*/
#include<stdio.h>

int main(){
    float angulo;
    printf("Ingrese el valor del angulo en grados: ");
    scanf("%f",&angulo);
    if (angulo == 90)
        printf("El angulo es recto");
    else
        printf("El angulo es %s", angulo > 90 ? "obtuso" : "agudo");
    return 0;
}