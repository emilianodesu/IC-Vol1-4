/*
*  5. Escriba un programa en C que calcule la suma y el promedio de un arreglo unidimensional con apuntadores.
*/

#include <stdio.h>

int main(){
    int n;
    printf("Ingrese tamanyo del vector, n = ");
    scanf("%d", &n);
    float vec[n], suma = 0, prom;
    for (int i = 0; i < n; i++){
        printf("Ingrese el elemento %d del vector: ", i);
        scanf("%f", &vec[i]);
    }

    for (int i = 0; i < n; i++){
        suma += *(vec+i);
    }
    prom = suma/n;
    printf("\nSuma = %f\nMedia = %f", suma, prom);

    return 0;
}