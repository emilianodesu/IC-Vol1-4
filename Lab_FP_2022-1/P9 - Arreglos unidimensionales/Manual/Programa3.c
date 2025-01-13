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
    char *ap, c = 'a';                        // Se declara el apuntador ap de tipo alfanumérico
    ap = &c;                                  // Se le asigna al apuntador la dirección de memoria de la variable c
    printf("Caracter: %c\n", *ap);            /* Se imprime el contenido de la variable a la que apunta el apuntador ap */
    printf("Codigo ASCII: %d\n", *ap);        /*Se imprime el código ASCII del carácter ‘a’ */
    printf("Direccion de memoria: %d\n", ap); /*Se imprime la dirección de memoria que almacena el apuntador*/

    return 0;
}