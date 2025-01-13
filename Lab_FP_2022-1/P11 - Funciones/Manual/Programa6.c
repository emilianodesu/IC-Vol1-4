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

void llamarFuncion();

int main(){
    for (int j = 0; j < 5; j++){
        llamarFuncion();
    }
    return 0;
}

void llamarFuncion(){
    /* Solo la primera vez que se llame a esta función se creará y se le asignará
    el valor de 0 a la variable estática numVeces */
    static int numVeces = 0;
    printf("Esta funcion se ha llamado %d veces.\n", ++numVeces);
}