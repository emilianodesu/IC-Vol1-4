/*
 *
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
    FILE *archivo;
    char escribir[] = "Escribir cadena en archivo mediante fprinft. \nFacultad de Ingenieria.\n ";
    archivo = fopen("fprintf.txt", "r+");
    if (archivo != NULL){
        fprintf(archivo, escribir);
        fprintf(archivo, "%s", "UNAM\n");
        fclose(archivo);
    }else{
        printf("El archivo no existe o no se tiene permisos de lectura/escritura.\n");
    }

    return 0;
}