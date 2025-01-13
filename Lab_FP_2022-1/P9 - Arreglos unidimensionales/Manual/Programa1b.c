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
    int lista[5] = {10, 8, 5, 8, 7}; // Se declara e inicializa el arreglo unidimensional
    int indice = 0;
    printf("\tLista\n");
    do{ // Acceso a cada elemento del arreglo unidimensional usando do-while
        printf("\nCalificacion del alumno %d es %d", indice + 1, lista[indice]);
        indice += 1; // Sentencia análoga a indice = indice + 1;
    } while (indice < 5);
    printf("\n");

    return 0;
}