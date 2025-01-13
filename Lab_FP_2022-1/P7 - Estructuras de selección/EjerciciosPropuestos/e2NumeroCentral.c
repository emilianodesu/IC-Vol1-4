/*
*  2. Diseñar un programa en el que dados tres números diferentes deducir cual es el central.
*/
#include <stdio.h>
int main(){
    int a, b, c;
    printf("Ingresa 3 numeros enteros separados por un espacio entre si");
    scanf("%d %d %d", &a, &b, &c);

    if ((a > b && b > c)||(c > b && b > a))
        printf("El numero central es %d", b);
    else if ((b > a && a > c)||(c > a && a > b))
        printf("El numero central es %d", a);
    else if ((b > c && c > a)||(a > c && c > b))
        printf("El numero central es %d", c);

    return 0;
}
