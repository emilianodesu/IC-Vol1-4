/*
*  3. Escribir un programa en C que:
*        - Pida por teclado la base (dato real)
*        - Pida por teclado la altura (dato real)
*        - Calcule el area del triángulo
*        - Muestre por pantalla el resultado (dato real) y todos los datos utilizados
*  
*/

#include <stdio.h>

int main(){
    float base, altura;
    printf("Ingrese el valor de la base: ");
    scanf("%f", &base);
    printf("Ingrese el valor de la altura: ");
    scanf("%f", &altura);
    printf("\nBase = %f\nAltura = %f\nArea = %f", base, altura, base*altura/2);

    return 0;
}