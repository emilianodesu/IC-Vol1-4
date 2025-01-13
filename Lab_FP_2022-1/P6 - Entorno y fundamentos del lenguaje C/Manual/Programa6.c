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
    short ocho, cinco, cuatro, tres, dos, uno;
    // 8 en binario: 0000 0000 0000 1000
    ocho = 8;
    // 5 en binario: 0000 0000 0000 0101
    cinco = 5;
    // 4 en binario: 0000 0000 0000 0100
    cuatro = 4;
    // 3 en binario: 0000 0000 0000 0011
    tres = 3;
    // 2 en binario: 0000 0000 0000 0010
    dos = 2;
    // 1 en binario: 0000 0000 0000 0001
    uno = 1;
    printf("Operadores aritmeticos\n");
    printf("5 modulo 2 = %d\n", cinco % dos);
    printf("Operadores logicos\n");
    printf("8 >> 2 = %d\n", ocho >> dos);
    printf("8 << 1 = %d\n", ocho << 1);
    printf("5 & 4 = %d\n", cinco & cuatro);
    printf("3 | 2 = %d\n", tres | dos);
    printf("\n");

    return 0;
}