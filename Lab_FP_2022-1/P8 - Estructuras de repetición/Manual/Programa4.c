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
    int op, uno, dos;
    do{
        printf(" --- Calculadora ---\n");
        printf("\n¿Que desea hacer\n");
        printf("1) Sumar\n");
        printf("2) Restar\n");
        printf("3) Multiplicar\n");
        printf("4) Dividir\n");
        printf("5) Salir\n");
        scanf("%d", &op);
        switch (op){
        case 1:
            printf("\tSumar\n");
            printf("Introduzca los numeros a sumar separados por comas\n");
            scanf("%d, %d", &uno, &dos);
            printf("%d + %d = %d\n", uno, dos, (uno + dos));
            break;
        case 2:
            printf("\tRestar\n");
            printf("Introduzca los numeros a restar separados por comas\n");
            scanf("%d, %d", &uno, &dos);
            printf("%d - %d = %d\n", uno, dos, (uno - dos));
            break;
        case 3:
            printf("\tMultiplicar\n");
            printf("Introduzca los numeros a multiplicar separados por comas\n");
            scanf("%d, %d", &uno, &dos);
            printf("%d * %d = %d\n", uno, dos, (uno * dos));
            break;
        case 4:
            printf("\tDividir\n");
            printf("Introduzca los numeros a dividir separados por comas\n");
            scanf("%d, %d", &uno, &dos);
            printf("%d / %d = %.2lf\n", uno, dos, ((double)uno / dos));
            break;
        case 5:
            printf("\tSalir\n");
            break;
        default:
            printf("\tOpcion invalida.\n");
        }
    } while (op != 5);

    return 0;
}