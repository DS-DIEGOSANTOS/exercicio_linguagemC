//19.Escreva um programa que calcule a raiz de uma equação do primeiro grau.
#include "stdio.h"
#include "stdlib.h"

int main(){
    float a,b,c,x;

    printf("---------------------------------\n");
    printf("  EXERCICIO 019\n");
    printf("\n---------------------------------\n");

    printf("Valor do coeficiente angular:");
    scanf("%f",& a);
    printf("Valor do costante:");
    scanf("%f",& b);
  

    if(a==0){
        printf("erro! nao e possivel realiza a equacao.");
        printf("\npor favor, tente corrigir o coeficiente angular");
        exit(0);
    }

    x = -b/a;

    printf("valor da raiz: %.1f",x);

    return 0;
}