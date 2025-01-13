/*
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 * You should have received a copy of the GNU General Public License
 * along with this program. If not, see <http://www.gnu.org/licenses/>.
 * Authors: Julio A. de León, Jorge A. Solano and Hugo Zuñiga
 */

#include <stdio.h>

int main(){
    // Declaración de variables
    int entero;
    float flotante;
    double doble;
    char caracter;
    // Asignación de variables
    entero = 14;
    flotante = 3.5f;
    doble = 6.8e10;
    caracter = 'A';
    // Funciones de salida de datos en pantalla
    printf("La variable entera tiene valor : %i \n", entero);
    printf("La variable flotante tiene valor : %f \n", flotante);
    printf("La variable doble tiene valor : %f \n", doble);
    printf("La variable caracter tiene valor : %c \n", caracter);
    printf("Entero como octal : %o \n Como Hexadecimal % X \n", entero, entero);
    printf("Flotante con precisión : %5.2f \n", flotante);
    printf("Doble con precisión : %5.2f \n", doble);
    printf("Carácter como entero : %d \n", caracter);

    return 0;
}