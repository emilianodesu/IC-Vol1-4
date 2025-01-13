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
    int uno, dos, tres;
    printf("Ingrese 3 números separados por espacios:\n");
    scanf("%d %d %d", &uno, &dos, &tres);
    if (uno > dos){
        if (dos > tres){
            printf("%d es mayor a %d que es mayor a %d\n", uno, dos, tres);
        }else{
            if (uno > tres){
                printf("%d es mayor a %d que es mayor a %d\n", uno, tres, dos);
            }else{
                printf("%d es mayor a %d que es mayor a %d\n", tres, uno, dos);
            }
        }
    }else{
        if (dos > tres){
            if (tres > uno){
                printf("%d es mayor a %d que es mayor a %d\n", dos, tres, uno);
            }else{
                printf("%d es mayor a %d que es mayor a %d\n", dos, uno, tres);
            }
        }else{
            printf("%d es mayor a %d que es mayor a %d\n", tres, dos, uno);
        }
    }

    return 0;
}