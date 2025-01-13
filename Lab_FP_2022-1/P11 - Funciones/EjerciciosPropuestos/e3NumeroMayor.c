/*
*  3. Escribir un programa que determine y visualice el número más grande de dos números dados, mediante una función.
*/

#include <stdio.h>

int numeroMayor(int, int);

int main(){
    int x, y;
    printf("Ingresa dos numeros separados por un espacio: ");
    scanf("%d %d", &x, &y);
    printf("\n%d es mayor", numeroMayor(x,y));

    return 0;
}

int numeroMayor(int n1, int n2){
    return n1 > n2 ? n1 : n2;
}