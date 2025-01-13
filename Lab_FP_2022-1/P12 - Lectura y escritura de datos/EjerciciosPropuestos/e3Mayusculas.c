/*
 *  3. Haz un programa que lea un fichero "fichero.txt" y escriba en otro fichero "FICHERO2.txt"
 *     el contenido del fichero de entrada con todas las letras en mayúsculas.
 *
 *     Ejemplo:
 *     fichero.txt               FICHERO2.txt
 *     Hola, mundo.              HOLA, MUNDO.
 *     Como estamos?             COMO ESTAMOS?
 *     Adios, adios...           ADIOS, ADIOS...
 */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    FILE *F;
    char caracteres[200] = "", linea[100];
    char *ptr;
    
    //Lectura
    F = fopen("fichero.txt", "r");
    if (F != NULL){
        printf("\nfichero.txt se abrio correctamente.\n");
        while (feof(F) == 0){
            fgets(linea, 100, F);
            ptr = strcat(caracteres, linea);
        }
        fclose(F);
    }else{
        printf("\nError al abrir el archivo.\n");
        printf("El archivo no existe o no se tienen permisos de lectura.\n");
    }
    printf("\nContenido del archivo:\n");
    printf("%s", caracteres);

    //Escritura
    F = fopen("FICHERO2.txt", "w");
    if (F != NULL){
        printf("\n\nFICHERO2.txt se abrio correctamente\n");
        printf("\nConvirtiendo texto de fichero.txt a mayusculas\n");
        for (int i = 0; caracteres[i] != '\0'; i++){
            caracteres[i] = toupper(caracteres[i]);
        }
        fputs(caracteres, F);
        fclose(F);
    }
    else
    {
        printf("\nError al abrir el archivo.\n");
        printf("El archivo no existe o no se tienen permisos de lectura.\n");
    }
    printf("\nContenido del archivo:\n");
    printf("%s", caracteres);

    return 0;
}