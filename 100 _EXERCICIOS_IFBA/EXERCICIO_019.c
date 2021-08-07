//19.Escreva um programa que calcule a raiz de uma equação do primeiro grau.
#include "stdio.h"
#include "math.h"
int main(){
    int a,b,c,x;
    printf("---------------------------------\n");
    printf("  EXERCICIO 019\n");
    printf("\n---------------------------------\n");
    printf("valor da incognita:");
    scanf("%d",& a);
    printf("valor do termo independente:");
    scanf("%d",& b);
    printf("resultado da equacao:");
    scanf("%d",& c);

    x = (c-b)/a;
    printf("valor da raiz: %d",x);
}
