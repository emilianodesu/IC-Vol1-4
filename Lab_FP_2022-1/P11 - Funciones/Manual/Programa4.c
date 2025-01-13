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
#include <stdio.h>

void incremento();
/* La variable enteraGlobal es vista por todas
las funciones (main e incremento) */
int enteraGlobal;

int main(){
    // La variable cont es local a la función main
    int cont;
    enteraGlobal = 0; // La función main accede a la variable global
    for (cont = 0; cont < 5; cont++){
        incremento();
    }

    return 999;
}

void incremento(){
    // La variable enteraLocal es local a la función incremento
    int enteraLocal = 5;
    enteraGlobal += 2;
    printf("global(%i) + local(%i) = %d\n", enteraGlobal, enteraLocal, enteraGlobal + enteraLocal);

    return 0;
}