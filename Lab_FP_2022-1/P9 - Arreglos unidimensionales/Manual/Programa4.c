/*
* This program is free software: you can redistribute it and/or
modify
* it under the terms of the GNU General Public License as published
by
* the Free Software Foundation, either version 3 of the License, or
* (at your option) any later version.
*
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
* GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public License
* along with this program. If not, see
<http://www.gnu.org/licenses/>.
*
* Authors: María Guadalupe Morales, Cintia Quezada and Jorge A.
Solano
*
*/

#include <stdio.h>

int main(){
    int a = 5, b = 10, c[10] = {5, 4, 3, 2, 1, 9, 8, 7, 6, 0};
    int *apEnt;
    apEnt = &a;
    printf("a = 5, b = 10, c[10] = {5, 4, 3, 2, 1, 9, 8, 7, 6, 0}\n");
    printf("apEnt = &a\n");
    /*A la variable b se le asigna el contenido de la variable a la que
    apunta apEnt*/
    b = *apEnt;
    printf("b = *apEnt \t-> b = %i\n", b);
    /*A la variable b se le asigna el contenido de la variable a la que
    apunta apEnt y se le suma uno*/
    b = *apEnt + 1;
    printf("b = *apEnt + 1 \t-> b = %i\n", b);
    // La variable a la que apunta apEnt se le asigna el valor cero
    *apEnt = 0;
    printf("*apEnt = 0 \t-> a = %i\n", a);
    /*A apEnt se le asigna la dirección de memoria que tiene el elemento 0
    del arreglo c*/
    apEnt = &c[0];
    printf("apEnt = &c[0] \t-> apEnt = %i\n", *apEnt);

    return 0;
}