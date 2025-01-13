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
 * Author: Jorge A. Solano
 *
 */

#include <stdio.h>

int main(){
    int num, cont = 0;
    printf("\a----- Tabla de multiplicar -----\n");
    printf("Ingrese un número: \n");
    scanf("%d", &num);
    printf("La tabla de multiplicar del %d es:\n", num);
    while(++cont <= 10)
        printf("%d x %d = %d\n", num, cont, num * cont);

    return 0;
}