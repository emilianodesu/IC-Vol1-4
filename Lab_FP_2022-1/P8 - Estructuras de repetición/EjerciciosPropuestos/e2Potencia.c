/*
*  2. Elabora un programa que eleve un número X a una potencia Y utilizando un ciclo while.
*/

#include<stdio.h>

int main(){
    int base,exp,res=1; 
    printf("Teclea la base y el exponente separados por un espacio: "); 
    scanf("%d %d",&base,&exp); //Lee la base y el exponente

    int i=1; //Iterador del ciclo
    while (i++<=exp){
        res*=base; //Hace el calculo del exponente y lo guarda en res
    }
    printf("%d ^ %d = %d",base,exp,res); //Imprime el resultado

    return 0;
}