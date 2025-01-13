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
    int entero;
    float flotante;
    printf("Ingresa el valor entero: ");
    scanf("%i", &entero);
    printf("El valor ingresado es: %d\n", entero);
    printf("Ingresa el valor float: ");
    scanf("%f", &flotante);
    printf("El valor ingresado es: %f\n", flotante);

    return 0;
}