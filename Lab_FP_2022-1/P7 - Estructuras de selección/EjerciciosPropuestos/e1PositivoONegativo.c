/*
*  1. Toma un número del usuario. Verifica si es negativo, cero o positivo e imprime el mensaje para esto.
*/

#include <stdio.h>

int main(){
    int num;
    printf("Ingresa un numero: ");
    scanf("%d",&num);

    if (num==0)
        printf("El numero que ingresaste es 0");
    else
        printf("El numero %d es %s",num, num > 0? "positivo" : "negativo");

    return 0;
}