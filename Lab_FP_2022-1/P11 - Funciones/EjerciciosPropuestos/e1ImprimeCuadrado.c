/*
*  1. Escribir un programa que despliegue en el margen izquierdo de la pantalla un cuadrado sólido de
*     asteriscos, cuyo costado o lado está especificado en el parámetro "lado". Por ejemplo, si lado
*     es 4, la función mostrará:
*     ****
*     ****
*     ****
*     ****
*     Pasa los argumentos en la función principal.
*     NOTA: Para convertir un caracter a entero utiliza la siguiente función: int atoi(const char *str)
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void imprime_cuadrado(int);
int lado;

int main(int argc, char**argv){
    lado = atoi(argv[1]);
    imprime_cuadrado(lado);

    return 0;
}

void imprime_cuadrado(int lado){
    printf("\n");
    for (int i = 0; i < lado; i++){
        for (int j = 0; j < lado; j++){
            printf("*");
        }
        printf("\n");
    }
    printf("\n");
}
