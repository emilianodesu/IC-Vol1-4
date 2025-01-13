/*
*  1. Elabora un programa en C que lea un archivo de operaciones que se llame
*     "calculos.txt" y contenga lo siguiente:
*
*     4 + 4
*     5 * 6
*     8 - 2
*     6 / 3
*
*     Cree un archivo con el siguiente resultado: (Nombre el archivo calculos2.txt)
*     
*     4 + 4 = 8
*     5 * 6 = 30
*     8 - 2 = 6
*     6 / 3 = 2
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE * archivo1 = fopen("calculos.txt", "r");
    FILE * archivo2 = fopen("calculos2.txt", "w");
    int n1, n2;
    char op;

    if (archivo1 != NULL){
        while (feof(archivo1) == 0){
            fscanf(archivo1, "%d %c %d", &n1, &op, &n2);
            switch (op){
            case '+':
                fprintf(archivo2, "%d %c %d = %d\n", n1, op, n2, n1+n2);
                break;

            case '-':
                fprintf(archivo2, "%d %c %d = %d\n", n1, op, n2, n1-n2);
                break;

            case '*':
                fprintf(archivo2, "%d %c %d = %d\n", n1, op, n2, n1*n2);
                break;

            case '/':
                fprintf(archivo2, "%d %c %d = %d\n", n1, op, n2, n1/n2);
                break;
            
            default:
                break;
            }
            
        }
        fclose(archivo1);
        fclose(archivo2);
    } else {
        printf("Error al abrir archivo.");
    }

    return 0;
}