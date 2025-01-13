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
    int enteroNumero;
    char caracterA = 65; // Convierte el entero a carácter ASCII.
    double puntoFlotanteNumero;
    // Asignar valor de teclado a una variable.
    printf("Escriba un valor entero : ");
    scanf("%i", &enteroNumero);
    printf("Escriba un valor real : ");
    scanf("%lf", &puntoFlotanteNumero);
    // Imprimir valores con formato.
    printf("\nImprimiendo las variables enteras \a\n");
    printf("\t Valor de enteroNumero = %i \a\n", enteroNumero);
    printf("\t Valor de caracterA = %c \a\n", caracterA);
    printf("\t Valor de puntoFlotanteNumero = %lf \a\n",puntoFlotanteNumero);
    printf("\t Valor de enteroNumero en base 16 = %x \a\n", enteroNumero);
    printf("\t Valor de caracterA en cdigo hexadecimal = %x\n", caracterA);
    printf("\t Valor de puntoFlotanteNumero\n");
    printf("en notacin científica = %e\n", puntoFlotanteNumero);

    return 0;
}