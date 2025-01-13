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
    int lista[10]; // Se declara el arreglo unidimensional
    int indice = 0;
    int numeroElementos = 0;
    printf("\nDa un numero entre 1 y 10 para indicar la cantidad de elementos que tiene el arreglo\n");
    scanf("%d", &numeroElementos);
    if ((numeroElementos >= 1) && (numeroElementos <= 10)){
        // Se almacena un número en cada elemento del arreglo unidimensional usando for
        for (indice = 0; indice <= numeroElementos - 1; indice++){
            printf("\nDar un numero entero para el elemento %d del arreglo", indice);
            scanf("%d", &lista[indice]);
        }
        printf("\nLos valores dados son: \n");
        // Se muestra el número almacenado en cada elemento del arreglo unidimensional usando for
        for (indice = 0; indice <= numeroElementos - 1; indice++){
            printf("%d ", lista[indice]);
        }
    }
    else
        printf("el valor dado no es valido");
    printf("\n");

    return 0;
}