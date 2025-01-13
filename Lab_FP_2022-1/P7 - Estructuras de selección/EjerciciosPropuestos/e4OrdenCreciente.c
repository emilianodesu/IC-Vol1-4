/*
*  4. Elabora un programa que, al recibir como datos de entrada tres valores
*     enteros diferentes entre sí, determine si los mismos están en orden creciente.
*/

#include <stdio.h>

int main(int argc, char const *argv[]){
    int n1, n2, n3;
    printf("Escribe tres numeros enteros diferentes separados por un espacio entre si:\n");
    scanf("%d %d %d", &n1, &n2, &n3);
    printf("%s\n", (n1<n2 && n2<n3) ? "Los numeros estan en orden creciente" : "Los numeros NO estan en orden creciente");

    return 0;
}