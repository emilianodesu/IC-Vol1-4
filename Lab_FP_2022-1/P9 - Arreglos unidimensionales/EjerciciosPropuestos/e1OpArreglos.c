/*
*  1. Escriba un programa en C que ejecute cada una de las siguientes instrucciones:
*     1) Declare un arreglo de N números enteros.
*     2) Asigna un número aleatorio a cada elemento del arreglo.
*     3) Muestre el valor del séptimo elemento de caracteres.
*     4) Declare un arreglo de N números reales de un solo subindice.
*     5) Introduzca un valor en el elemento 4 del arreglo anterior.
*     6) Declare un arreglo de 100 elementos de punto flotante.
*     7) Asigna un número aleatorio a cada elemento del arreglo.
*     8) Haga la sumatoria de los elementos del arreglo de punto flotante c de 100
*        elementos (utiliza apuntadores).
*/

#include<stdio.h>
#include<time.h>

int main(){
    time_t t;
    int N,n;
    float suma = 0;
    srand((unsigned)time(&t)); //Semilla para generar numeros aleatorios.

    do{
        printf("Ingresa el numero de elementos del arreglo de enteros (min. 7): \n");
        scanf("%d",&N);
        if (N<7)
            printf("El arreglo debe tener al menos 7 elementos\n");
    } while (N < 7); //N debe tener al menos 7 elementos para cumplir 3.
    
    int NUM[N]; //1. Declare un arreglo de N números enteros.

    for (int i = 0; i < N; i++){
        NUM[i] = rand() % 10; //2. Asigna un número aleatorio a cada elemento del arreglo.
    }

    for (int i = 0; i < N; i++){
        printf("%d\t",NUM[i]);
    }

    printf("\nEl septimo elemento del arreglo es: %d\n",NUM[6]); //3. Muestre el valor del séptimo elemento de caracteres.

    do{
        printf("Ingresa el numero de elementos del arreglo de reales (min. 4): \n");
        scanf("%d",&n);
        if (n < 4)
            printf("El arreglo debe tener al menos 7 elementos\n");
    } while (n < 4); //n debe tener al menos 4 elementos para cumplir 5.

    float NUM2[n]; //4. Declare un arreglo de N números reales de un solo subíndice.

    NUM2[3] = 92.48; //5. Introduzca un valor en el elemento 4 del arreglo anterior.

    for (int i = 0; i < n; i++){
        printf("%f\t",NUM2[i]); 
    }

    float NUM3[100],*NUM3ptr; //6. Declare un arreglo de 100 elementos de punto flotante.

    for (int i = 0; i < 100; i++){
        NUM3[i] = rand() % 10; //7. Asigna un número aleatorio a cada elemento del arreglo.
    }

    for (int i = 0; i < 100; i++){ 
        suma += *(NUM3+i); //8. Haga el sumatorio de los elementos del arreglo de punto flotante c de 100 elementos (utiliza apuntadores).
    }

    printf("\nLa suma de elementos de NUM3 = %f",suma); 

    return 0;
}