//24. Escreva um programa que leia três números e mostre o maior entre eles.
#include "stdio.h"
int main(){
    float a,b,c,highest_value;

    printf("---------------------------------\n");
    printf("  EXERCICIO 024\n");
    printf("\n---------------------------------\n");

    printf("digite o valor 1: ");
    scanf("%f",& a);
    printf("digite o valor 2: ");
    scanf("%f",& b);
    printf("digite o valor 3: ");
    scanf("%f",& c);

    if(a>=b && a>=c)
        highest_value=a;
    else if(b>=a && b>=c)     
        highest_value=b;
    else if(c>=b && c>=a)
        highest_value=c;

    printf("o maior valor: %.2f",highest_value);

    return 0;
}