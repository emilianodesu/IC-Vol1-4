/*
*  1. Escriba un programa que imprima los siguientes patrones por separado, uno debajo del siguiente.
*     Todos los asteriscos (*) deberán ser impresos por un solo enunciado de la forma printf("*");.
*     
*     A)            B)              C)              D)
*     *             **********      **********               *
*     **            *********        *********              **
*     ***           ********          ********             ***
*     ****          *******            *******            ****
*     *****         ******              ******           *****
*     ******        *****                *****          ******
*     *******       ****                  ****         *******
*     ********      ***                    ***        ********
*     *********     **                      **       *********
*     **********    *                        *      **********
*/

#include<stdio.h>

int main(){
    int i,j,k,l; //Variables que serviran como contadores
    printf("\n");
    //Primer patron
    i=1; // i = Numero de asteriscos que imprime por renglon
    do{ 
        j=1; //Cada iteracion se debe resetear el valor de j a 1
        do{
            printf("*"); //Imprime asterisco
        } while(j++<i); //Se repite i veces
        printf("\n"); //Imprime salto de linea
    } while(i++<10); //El contador i va en incremento de 1 a 10
    printf("\n");
    
    //Segundo patron
    i=10; //i = numero de asteriscos que imprime por renglon
    do{
        j=1; //Cada iteracion se debe resetear el valor de j a 1
        do{
            printf("*"); //Imprime asterisco
        } while(j++<i); //Se repite i veces
        printf("\n"); //Salto de linea
    } while(i-->1); //El contador i va en decremento de 10 a 1
    printf("\n");

    //Tercer patrón
    i=10; //i = Numero de asteriscos que imprime por renglon
    l=0;  //l = Numero de espacios que imprime por renglon
    do{
        j=1; //Iterador de asteriscos
        k=0; //Iterador de espacios
        while(k++<l){ //Se repite l veces
            printf(" "); //Imprime los espacios
        } 
        do{
            printf("*"); //Imprime los asteriscos
        } while(j++<i); //Se repite i veces
        printf("\n"); //Salto de linea
        l++; 
    } while(i-->1); 
    printf("\n");

    //Cuarto patron
    i=1; //i = Numero de asteriscos que imprime en cada renglon
    l=9;  //l = Numero de espacios que imprime en cada renglon
    do{
        j=1; //Iterador de asteriscos
        k=0; //Iterador de espacios
        while(k++<l){ //Se repite l veces
            printf(" "); //Imprime los espacios
        } 
        do{
            printf("*"); //Imprime los asteriscos
        } while(++j<=i); //Se repite i veces
        printf("\n"); //Salto de linea
        l--; 
    } while(++i<=10); 
    printf("\n");

    return 0;
}