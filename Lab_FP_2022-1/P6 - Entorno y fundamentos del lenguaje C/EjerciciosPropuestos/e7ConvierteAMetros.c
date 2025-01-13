/*
*  7. Elabora un programa que lea una longitud expresada en millas, pies y pulgadas, y las muestre en metros.
*/
#include <stdio.h>

int main(){
    float millas, pies, pulgadas;
    printf("Ingrese millas pies pulgadas (separadas por un espacio): ");
    scanf("%f %f %f", &millas, &pies, &pulgadas);
    printf("La distancia es de %f [m]", (millas*1609.34)+(pies*0.3048)+(pulgadas*0.0254));

    return 0;
}