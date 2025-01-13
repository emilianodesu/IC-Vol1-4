/*
*  2. Elaborar un programa en C que acumule (agregar al final), cada vez que se ejecute, los
*     siguientes datos: nombre, apellido paterno, apellido materno y estatura de los miembros
*     del equipo.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    char nombre[25], ap[25], am[25]; 
    float estatura;
    printf("Nombre: ");
    scanf("%s", nombre);
    printf("Apellido paterno: ");
    scanf("%s", ap);
    printf("Apellido materno: ");
    scanf("%s", am);
    printf("Estatura [m]: ");
    scanf("%f", &estatura);

    FILE * archivo = fopen("datos.txt", "a");

    if (archivo != NULL){
        fprintf(archivo, "Nombre: %s\n", nombre);
        fprintf(archivo, "Apellido paterno: %s\n", ap);
        fprintf(archivo, "Apellido materno: %s\n", am);
        fprintf(archivo, "Estatura: %.2f\n\n", estatura);
        fclose(archivo);
    } else {
        printf("Error al abrir archivo.");
    }

    return 0;
}