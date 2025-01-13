/*
*  4. Declarar una variable tipo arreglo de caracteres nombrada nombre.
*     Declarar una variable tipo entero nombrada edad.
*     Declarar una variable tipo real nombrada estatura.
*     Declarar una variable tipo arreglo de caracteres nombrada carrera.
*     Declarar una variable tipo arreglo de caracteres nombrada facultad.
*     Imprimir todas las variables anteriores
*/
#include <stdio.h>

int main(){
    char nombre[20] = {"Seba Jun"};
    int edad = 21;
    float estatura = 1.82;
    char carrera[30] = {"Ingenieria en computacion"};
    char facultad[30] = {"Facultad de Ingenieria"};
    printf("Nombre: %s", nombre);
    printf("\nEdad: %d", edad);
    printf("\nEstatura: %.2f m", estatura);
    printf("\nCarrera: %s", carrera);
    printf("\nFacultad: %s", facultad);

    return 0;
}