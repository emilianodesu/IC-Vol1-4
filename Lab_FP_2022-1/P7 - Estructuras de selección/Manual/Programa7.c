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
    // declaración de la enumeración
    enum boolean{
        NO,
        YES
    };
    // declaración de una variable tipo enumeración
    enum boolean valorBooleano;
    valorBooleano = YES;
    // Se comprueba que el valor de una enumeración es entero
    printf("%d\n", valorBooleano);
    // Se comprueba que el valor de una enumeración se puede reasignar
    enum diasSemana{
        LUNES,
        MARTES,
        MIERCOLES = 5,
        JUEVES,
        VIERNES
    };
    printf("\n%d", LUNES);
    printf("\n%i", MARTES);
    printf("\n%d", MIERCOLES);
    printf("\n%i", JUEVES);
    printf("\n%d\n", VIERNES);

    return 0;
}