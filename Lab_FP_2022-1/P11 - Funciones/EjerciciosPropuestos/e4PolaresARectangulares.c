/*
*  4. Escribir un programa que utilice una función para convertir coordenadas polares a rectangulares.
*/

#include <stdio.h>
#include <math.h>

struct coordPolares{
    float r;
    float theta;
};

struct coordRectangulares{
    float x;
    float y;
};

struct coordRectangulares polaresARectangulares(struct coordPolares);

int main(){
    struct coordPolares p;
    printf("Ingresa el valor de r (polar): ");
    scanf("%f", &p.r);
    printf("Ingresa el valor de theta (polar): ");
    scanf("%f", &p.theta);
    struct coordRectangulares r = polaresARectangulares(p);
    printf("Las coordenadas rectangulares (x, y) son (%.2f, %.2f)", r.x, r.y);

    return 0;
}

struct coordRectangulares polaresARectangulares(struct coordPolares p){
    struct coordRectangulares r;
    r.x = p.r*cos(p.theta);
    r.y = p.r*sin(p.theta);

    return r;
}