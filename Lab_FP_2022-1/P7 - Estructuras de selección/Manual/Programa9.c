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
    double a, b, res;
    printf("Calcular el error matematico E = |a - b|\n\n");
    printf("Ingrese el valor de a:\n");
    scanf("%lf", &a);
    printf("Ingrese el valor de b:\n");
    scanf("%lf", &b);
    res = a < b ? b - a : a - b;
    printf("El error matematico de\n");
    printf("| %lf - %lf | es %lf\n", a, b, res);

    return 0;
}