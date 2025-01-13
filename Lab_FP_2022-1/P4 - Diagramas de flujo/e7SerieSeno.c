/*
*  Programa auxiliar para el ejercicio 7
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int fact, signo, n=0;
    float x, sin_x=0 , sin_x_ant=0, x_pot , dif=1;

    printf("Ingrese el valor de x en radianes:\n");
    scanf("%f", &x);

    while(dif>0.001){
        signo=1;
        fact=1;
        x_pot=1;
        for(int i=1; i<=n; i++){
            signo*=-1;
        }

        for(int i=1; i<=(2*n+1); i++){
            fact*=i;
            x_pot*=x;
        }

        sin_x+=signo*(x_pot/fact);

        if(sin_x_ant>sin_x)
            dif = sin_x_ant-sin_x;
        else
            dif = sin_x-sin_x_ant;

        sin_x_ant=sin_x;
        n++;
    }

    printf("Sin(x) = %.4f",sin_x);

    return 0;
}
