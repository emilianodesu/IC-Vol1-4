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
    /* Al igual que en la estructura if-else, 0 -> falso y diferente de 0 -> verdadero.
    El siguiente es un ciclo infinito porque la condición siempre es verdadera.
    Así mismo, debido a que el ciclo consta de una sola línea, las llaves { } son
    opcionales.*/
    while(100){
        printf("Ciclo infinito.\nPara terminar el ciclo presione ctrl + c.\n");
    }

    return 0;
}