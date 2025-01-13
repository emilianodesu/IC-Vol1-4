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
    int op = 0;
    printf("\tMenu\n\n");
    printf("Elegir la opcion deseada\n");
    printf("1) Ingresar\n");
    printf("2) Registrarse\n");
    printf("3) Salir\n");
    scanf("%d", &op);
    switch (op){
        case 1:
            printf("Se selecciono 'Ingresar'\n");
            break;
        case 2:
            printf("Se selecciono 'Registrarse'\n");
            break;
        case 3:
            printf("Se selecciono 'Salir'\n");
            break;
        default:
            printf("Opcion no valida\n");
    }

    return 0;
}