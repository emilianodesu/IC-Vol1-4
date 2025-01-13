/*
*  2. Escribe un programa que obtenga el promedio de los elementos de un arreglo bidimensional de NxM elementos.
*     Utiliza apuntadores.
*/

#include <stdio.h>
#include<time.h>

int main (){
    time_t t;
    srand((unsigned)time(&t));
	int N, M;
    
	
	printf("Ingrese el valor de N: ");
	scanf("%d", &N);
	printf("Ingrese el valor de M: ");
	scanf("%d", &M);
	
	int matriz[N][M];
	int suma = 0;
	int numElementos = N * M;
    int* ap = matriz;
	
	printf("\n\n");

    for (int i = 0; i < N; i++){
        for (int j = 0; i < M; i++){
            matriz[i][j] = rand() % 10;
            printf(" %d   ", matriz[i][j]);
        }
        printf("\n");
    }
    
	
	for(int i = 0; i < numElementos; i++){
		suma += *(ap + i);
	}
    float promedio = (float)suma/numElementos;
    printf("Promedio = %f", promedio);
    
	return 0;
}