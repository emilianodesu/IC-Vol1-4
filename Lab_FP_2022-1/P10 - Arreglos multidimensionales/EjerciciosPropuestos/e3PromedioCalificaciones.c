/*
*  3. Las notas de un colegio se tienen en una matriz de 30x5 elementos (30, número de
*     alumnos; 5, número de asignaturas). Se desea listar las notas de cada alumno y su
*     media. Cada alumno tiene como mínimo dos asignaturas y máximo cinco, aunque los
*     alumnos no necesariamente todos deben tener cinco materias.
*/

#include<stdio.h>
#include<time.h>

time_t t;
int a[30][5],materias;
float prom;

int main(){

    srand((unsigned)time(&t));

    int alm,mat;

    for (alm = 0; alm < 30; alm++){
        prom = 0;
        materias = rand() % 4 + 2;
        printf("Alumno %d:\t",alm+1);
        for (mat = 0; mat < materias; mat++){
            a[alm][mat] = rand() % 6 + 5;
            printf("materia %d = %d\t",mat+1,a[alm][mat]);
            prom += a[alm][mat];
        }
        printf("\nPromedio = %.1f\n",prom/materias);
    }
    
    return 0;
}