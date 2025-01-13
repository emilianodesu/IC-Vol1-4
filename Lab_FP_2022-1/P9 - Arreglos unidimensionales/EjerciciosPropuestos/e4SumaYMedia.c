/*
*  4. Calculo de la suma de todos los elementos de un vector, así como la media aritmética.
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
        suma += vec[i];
    }
    prom = suma/n;
    printf("\nSuma = %f\nMedia = %f", suma, prom);

    return 0;
}