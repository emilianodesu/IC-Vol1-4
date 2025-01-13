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
    int matriz[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int i, cont = 0, *ap;
    ap = *matriz; // Esta sentencia es análoga a: ap = &matriz[0][0];
    printf("Imprimir Matriz\n");
    for (i = 0; i < 9; i++){
        if (cont == 3){ // Se imprimió un renglón y se hace un salto de línea
            printf("\n");
            cont = 0; // Inicia conteo de elementos del siguiente renglón
        }
        printf("%d\t", *(ap + i)); // Se imprime el siguiente elemento de la matriz
        cont++;
    }
    printf("\n");

    return 0;
}