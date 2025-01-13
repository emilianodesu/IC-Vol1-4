/*
*  7. Dados dos numeros, imprimir sus tablas de multiplicar de forma alternativa.
*/

#include <stdio.h>

int main(){
    int n1, n2, i = 0;
    printf("Ingrese los dos numeros separados por un espacio:\n");
    scanf("%d %d", &n1, &n2);
    printf("Tablas de multiplicar de %d y %d\n", n1, n2);
    while (i++<10){
        printf("%d x %d = %d\n%d x %d = %d\n",n1, i, n1*i, n2, i, n2*1);
    }

    return 0;
}