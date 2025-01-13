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
// ############## calculadora.c ##############

#include <stdio.h>

int suma(int, int);
// static int resta(int,int);
int producto(int, int);
// static int cociente (int,int);
int main(){
    printf("5 + 7 = %i\n", suma(5, 7));
    // printf("9 - 77 = %d\n",resta(9,77));
    printf("6 * 8 = %i\n", producto(6, 8));
    // printf("7 / 2 = %d\n",cociente(7,2));

    return 0;
}