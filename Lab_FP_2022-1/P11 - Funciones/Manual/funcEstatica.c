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
// ############## funcEstatica.c ##############

#include <stdio.h>

int suma(int, int);
static int resta(int, int);
int producto(int, int);
static int cociente(int, int);

int suma(int a, int b){
    return a + b;
}

static int resta(int a, int b){
    return a - b;
}

int producto(int a, int b){
    return (int)(a * b);
}

static int cociente(int a, int b){
    return (int)(a / b);
}