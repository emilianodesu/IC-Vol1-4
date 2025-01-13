/*
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program. If not, see <http://www.gnu.org/licenses/>.
 *
 * Author: María Guadalupe Morales, Cintia Quezada and Jorge A. Solano
 *
 */

#include <stdio.h>

int main(){
    int lista[10][10]; // Se declara el arreglo multidimensional
    int i, j;
    int renglon, columna;
    printf("\nDa el numero de renglones y columnas separados con coma\n");
    scanf("%d,%d", &renglon, &columna);
    if (((renglon >= 1) && (renglon <= 10)) && ((columna >= 1) && (columna <= 10))){
        // Acceso a cada elemento del arreglo multidimensional usando for
        for (i = 0; i <= renglon - 1; i++){
            for (j = 0; j <= columna - 1; j++){
                printf("\nNumero para el elemento %d,%d del arreglo", i, j);
                scanf("%d", &lista[i][j]);
            }
        }
        printf("\nLos valores dados son: \n");
        // Acceso a cada elemento del arreglo multidimensional usando for
        for (i = 0; i <= renglon - 1; i++){
            for (j = 0; j <= columna - 1; j++){

                printf("%d ", lista[i][j]);
            }
            printf("\n");
        }
    }else
        printf("Los valores dados no son validos");
    printf("\n");

    return 0;
}