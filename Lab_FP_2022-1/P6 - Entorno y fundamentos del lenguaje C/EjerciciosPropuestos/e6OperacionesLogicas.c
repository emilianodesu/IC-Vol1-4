/*
* 6. Realice un programa que haga las siguientes operaciones lógicas y muestre el resultado
*    Si a = 9, b = 2, c = 5, d = 3:
*    1) negación (a mayor que b) o (b menor o igual que c)
*    2) (c mayor que d) o (c igual que a)
*    3) b igual que (c-d) o (a+b mayor o igual que c*d) y (c mayor que 5) y (c mayor que b) o (a menor o igual que d) 
*/
#include<stdio.h>
#include<stdbool.h>

int a=9, b=2, c=5, d=3;
bool x;

int main(){
    x = !(a>b) || (b<=c);
    printf("!(a>b) || (b<=c) = %s\n", x ? "true" : "false");
    
    x = (c>d) || (c==a);
    printf("(c>d) || (c==a) = %s\n", x ? "true" : "false");
    
    x = (b==(c-d)) || ((a+b)>=(c*d)) && (c>5) && (c>b) || (a<=d);
    printf("(b==(c-d)) || ((a+b)>=(c*d)) (c>5) && (c>b) || (a<=d) = %s\n", x ? "true" : "false");

    return 0;
}