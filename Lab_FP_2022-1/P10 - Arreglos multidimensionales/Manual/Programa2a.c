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
    int i, j, a[5][5];
    for (i = 0; i < 5; i++){ // Representa al renglón del arreglo
        for (j = 0; j < 5; j++){ // Representa a la columna del arreglo
            a[i][j] = i + j;
            printf("\t%d, ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}