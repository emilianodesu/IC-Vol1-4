/*
*  5. Escriba un programa que lea el radio de un círculo y que imprima el diámetro del mismo,
*     su circunferencia y su área. Utilice la constante 3.13159 para pi (declarar como estática)
*     Realice una función para cada uno de estos cálculos. Compile los dos archivos juntos.
*/

#include <stdio.h>
#include "e5Header.h"

int main(){
    float radio;
    printf("Ingresa el radio del circulo: ");
    scanf("%f", &radio);
    printf("\nDiametro = %.2f", diam(radio));
    printf("\nCircunferencia = %.2f", circun(radio));
    printf("\nArea = %.2f", area(radio));

    return 0;
}