/*
*  4. Escribe un programa que intercambie las M filas de un arreglo
*     bidimensional. Los elementos de la primera fila se intercambian con los de la
*     última fila, los del segundo con los de la penúltima, y así sucesivamente.
*
*     Dato: MAT[M][N] (arreglo bidimensional de tipo real de M filas y N columnas, 1 <= M <= 50 y 1 <= N <= 50)
*/

#include<stdio.h>
#include<time.h>

time_t t;
int M,N;

int main(){

    srand((unsigned)time(&t)); //Semilla para generar numeros aleatorios

    do{ //Este bucle se asegura de que M y N no sean mayores a 50 ni numeros negativos
        printf("Ingresa el numero de renglones (No mas de 50): ");
        scanf("%d",&M);
        printf("Ingresa el numero de columnas (No mas de 50): ");
        scanf("%d",&N);
    } while (M<0 || M>50 || N>50 || N<0);

    float MAT[M][N]; //Declaracion de la matriz MxN de numeros reales

    for (int i = 0; i < M; i++){ //Llenando la matriz con numeros aleatorios
        for (int j = 0; j < N; j++){
            MAT[i][j] = rand() % 10; 
        }
    }

    printf("\nLa matriz antes de modificarse:\n\n"); 
    for (int i = 0; i < M; i++){
        for (int j = 0; j < N; j++){
            printf("%f ", MAT[i][j]); 
        }
    printf("\n");
    }

    float MATAUX[M][N]; //Declaracion de la matriz modificada
    int k; //Variable auxiliar para el ciclo
    for (int j = 0; j < N; j++){ //Intercambiando renglones
        k=M-1;
        for (int i = 0; i < M; i++){
            MATAUX[i][j] = MAT[k][j];
            k--;
        }
    }

    printf("\nLa matriz modificada:\n\n");
    for (int i = 0; i < M; i++){
        for (int j = 0; j < N; j++){
            printf("%f ", MATAUX[i][j]); 
        }
    printf("\n");
    }

    return 0;
}