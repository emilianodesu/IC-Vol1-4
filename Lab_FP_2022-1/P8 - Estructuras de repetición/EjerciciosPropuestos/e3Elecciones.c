/*
*  3. Suponga que en las elecciones del 2018 el Instituto Nacional Electoral pide
*     a la UNAM un programa de computo para el conteo de votos. Para esta
*     elección, habrá cinco candidatos, los cuales se representan con los valores
*     comprendidos de 1 a 5. Elabora un programa en C que permita obtener el
*     número de votos de cada candidato y el porcentaje que obtuvo respecto al
*     total de los votantes. El usuario ingresa los votos de manera
*     desorganizada, tal y como se obtienen en una elección, el final de la
*     captura de los datos se representa por un cero.
*
*     Nota: 1 representa un voto para el candidato 1, 3 un voto para el candidato
*     3, y así sucesivamente. Realizar este problema con un ciclo do-while.
*/

#include<stdio.h>

int main(){
    int voto,total=0,candidato1,candidato2,candidato3,candidato4,candidato5;
    float porciento1,porciento2,porciento3,porciento4,porciento5;
    do{
        printf("Ingrese el voto: 1)\t2)\t3)\t4)\t5)\n");
        scanf("%d",&voto);
        switch (voto){
        case 1:
            candidato1+=1;
            total+=1;
            break;
        case 2:
            candidato2+=1;
            total+=1;
            break;
        case 3:
            candidato3+=1;
            total+=1;
            break;
        case 4:
            candidato4+=1;
            total+=1;
            break;
        case 5:
            candidato5+=1;
            total+=1;
            break;
        case 0:
            break;
        default:
            printf("Voto invalido, ingrese el voto nuevamente\n");
            voto=1;
            break;
        }
    } while (voto != 0);
    
    printf("RESULTADOS\n\n");
    printf("Candidato 1: %d voto(s),\t%.2f por ciento\n",candidato1,(float)candidato1*100/total);
    printf("Candidato 2: %d voto(s),\t%.2f por ciento\n",candidato2,(float)candidato2*100/total);
    printf("Candidato 3: %d voto(s),\t%.2f por ciento\n",candidato3,(float)candidato3*100/total);
    printf("Candidato 4: %d voto(s),\t%.2f por ciento\n",candidato4,(float)candidato4*100/total);
    printf("Candidato 5: %d voto(s),\t%.2f por ciento\n",candidato5,(float)candidato5*100/total);
    
    return 0;
}