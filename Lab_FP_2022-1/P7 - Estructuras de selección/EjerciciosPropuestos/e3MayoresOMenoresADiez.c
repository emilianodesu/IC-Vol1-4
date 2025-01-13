/*
*  3. Introducir una serie de números, sin utilizar ciclos. Decir si esos numeros son mayores o menores de 10.
*/

#include <stdio.h>

int main() {
    int a, b, c, d, e;
    printf("Ingrese 5 numeros enteros separados por un espacio entre si:\n");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

    if (a = 10)
        printf("El numero es 10\n");
    else
        printf("%d es %s a 10\n", a, a > 10 ? "mayor" : "menor");  

    if (b = 10)
        printf("El numero es 10\n");
    else
        printf("%d es %s a 10\n", b, b > 10 ? "mayor" : "menor"); 

    if (c = 10)
        printf("El numero es 10\n");
    else
        printf("%d es %s a 10\n", c, c > 10 ? "mayor" : "menor"); 

    if (d = 10)
        printf("El numero es 10\n");
    else
        printf("%d es %s a 10\n", d, d > 10 ? "mayor" : "menor"); 

    if (e = 10)
        printf("El numero es 10\n");
    else
        printf("%d es %s a 10\n", e, e > 10 ? "mayor" : "menor"); 

    return 0;
}