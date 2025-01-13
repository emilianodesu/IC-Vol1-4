/*
*  5. Escribir un programa que visualice la siguiente salida:
*     
*     1
*     1    2
*     1    2    3
*     1    2    3    4
*     1    2    3
*     1    2  
*     1
*/

#include<stdio.h>

int main(){
    int num=1,fila=1,cant=1,aux=0;
    //num: es el numero que imprime
    //fila: cuenta la fila en que nos situamos para imprimir
    //cant: es la cantidad de numeros que imprime en cada fila
    //aux: esta variable sirve para indicar cuando llegamos a la 5a fila y empezar a decrementar la cantidad de numeros que se imprimen en cada fila
    while (fila++<=8){
        num=1;   
        while (num<=cant){
            printf("%d\t",num);
            num++;
        }
        printf("\n");
        if (cant<=4 && aux==0)
            cant++;
        if (cant==5){
            cant--;
            aux=1;
        }
        if (aux==1)
            cant--;
    }

    return 0;
}