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
    // Los valores de una enumeración son enteros y constantes
    enum diasSemana{
        LUNES,
        MARTES,
        MIERCOLES,
        JUEVES,
        VIERNES,
        SABADO,
        DOMINGO
    };
    int op;
    printf("Ingrese el dia de la semana.\n");
    printf("1) Lunes\n");
    printf("2) Martes\n");
    printf("3) Miercoles\n");
    printf("4) Jueves\n");
    printf("5) Viernes\n");
    printf("6) Sabado\n");
    printf("7) Domingo\n");
    scanf("%d", &op);
    switch (op - 1){
        case LUNES:
        case MARTES:
            printf("Inicio de semana.\n");
            break;
        case MIERCOLES:
            printf("Mitad de semana.\n");
            break;
        case JUEVES:
            printf("¡Casi inicia el fin de semana!\n");
            break;
        case VIERNES:
        case SABADO:
            printf("¡Fin de semana!\n");
            break;
        case DOMINGO:
            printf("Dia de descanso.\n");
            break;
        // No se necesita default
    }

    return 0; // Valor entero en hexadecimal
}