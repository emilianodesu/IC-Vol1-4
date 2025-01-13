/*
*  3. Calcular el número de elementos negativos, cero y positivos de un vector dado de sesenta elementos.
*/

#include<stdio.h>
#include<time.h>

int main(){
    int signo; //Para generar numeros negativos (se multiplicara por los valores aleatorios generados en el vector) 
    int VEC[60]; //Arreglo unidimensional de 60 entradas
    int pos=0,neg=0,cero=0; //Contadores para cada caso de los elementos
    time_t t; 
    srand((unsigned)time(&t)); //Semilla para generar numeros aleatorios

    for (int i = 0; i < 60; i++){
        signo = rand() % 2; //Asigna unicamente valores de 0 o 1
        if (signo == 0) //Si signo es igual a 0, lo cambiamos por -1 para obtener numeros negativos al multiplicarlo por VEC[i]
            signo = -1;
        VEC[i] = (rand() % 100)*signo; //Genera numeros aleatorios enteros menores a 100 y mayores a -100
        printf("%d\t",VEC[i]); //Imprime los elementos del vector para verificar
        if (VEC[i]==0)
            cero++; //Si el elemento es cero, el contador de elementos cero incrementa en 1
        else if (VEC[i]>0)
            pos++; //Si el elemento es positivo, el contador de elementos positivos incrementa en 1
        else if (VEC[i]<0)
            neg++; //Si el elemento es negativo, el contador de elementos negativos incrementa en 1
    }

    printf("\nEl vector tiene:\n%d elementos positivos\n%d elementos negativos\n%d elemento(s) igual a cero",pos,neg,cero); //Imprime los resultados

    return 0;
}