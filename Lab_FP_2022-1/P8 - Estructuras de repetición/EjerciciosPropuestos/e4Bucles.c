/*
*  4. Reescrive el siguiente código con las sentencias for y do-while.
*     Utilice la directiva define para definir una constante simbólica
*     utilízala para detener el ciclo.
*/

#include <stdio.h>
#define top 100

int num = 10;
int main(){
    while (num <= 100){
        printf("%d\n", num);
        num += 10;
    }
    printf("\n");

    for (num = 10; num <= top; num += 10){
        printf("%d\n", num);
    }
    printf("\n");

    num = 10;
    do{
        printf("%d\n", num);
        num += 10;
    } while (num <= top);

}