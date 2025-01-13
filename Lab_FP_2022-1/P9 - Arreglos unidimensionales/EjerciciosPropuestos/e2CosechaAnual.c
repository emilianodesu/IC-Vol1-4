/*
*  2. En un arreglo unidimensional de tipo real se tienen almacenadas las toneladas mensuales de cereales
*     cosechadas durante el año anterior en Xochimilco. Escribe un programa que calcule lo siguiente:
*     a) El promedio mensual de toneladas cosechadas
*     b) ¿Cuántos meses tuvieron una cosecha superior al prommedio anual?
*     c) ¿En que mes se produjo el mayor número de toneladas? ¿Cuántas fueron?
*
*     Dato: COS[12] (arreglo unidimensional de tipo real de 12 elementos)
*/
#include <stdio.h>

int main(){
    float COS[12];
    float suma = 0, prom, mayor = 0, mes, meses=0;

    for (int i = 0; i < 12; i++){
        printf("Ingrese la cosecha en toneladas del mes %d: ", i+1);
        scanf("%f", &COS[i]);
        suma += COS[i];
    }
    prom = suma/12;
    printf("\nPromedio mensual de cosecha en toneladas: %f", prom);
    
    for (int i = 0; i < 12; i++){
        if (COS[i] > mayor){
            mayor = COS[i];
            mes = i;
        }
        if (COS[i]>prom)
            meses++;
    }
    printf("\n%d meses tuvieron una cosecha mayor al promedio");
    printf("\nMes con mayor cosecha: %d, %f toneladas", mes+1, mayor);

    return 0;
}