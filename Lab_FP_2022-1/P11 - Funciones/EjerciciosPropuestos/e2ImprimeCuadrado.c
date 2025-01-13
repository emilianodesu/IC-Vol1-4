/*
*  2. Modifique la función creada en el ejercicio anterior para formar el cuadrado con base en el
*     cualquier caracter que esté contenido en el parámetro caracter. Por tanto, si lado es 5 y 
*     fillCharacter es "#" entonces esta función debería imprimir:
*     #####
*     #####
*     #####
*     #####
*     #####
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void imprime_cuadrado2(int, char);

int main(int argc, char**argv){
    char caracter = argv[2][0];
    imprime_cuadrado2(atoi(argv[1]), caracter);

    return 0;
}

void imprime_cuadrado2(int lado, char fill_character){
    printf("\n");
    for (int i = 0; i < lado; i++){
        for (int j = 0; j < lado; j++){
            printf("%c",fill_character);
        }
        printf("\n");
    }
    printf("\n");
}
