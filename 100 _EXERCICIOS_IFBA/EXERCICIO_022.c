//22. Escreva um programa que leia um número e exiba o seu módulo.
#include "stdio.h"
int main (){
    float number;
    printf("---------------------------------\n");
    printf("  EXERCICIO 022\n");
    printf("\n---------------------------------\n");
    printf("digite um valor:");
    scanf("%f",& number);

    if(number<0){
        number*=(-1);     
    }

    printf("\nmodulo: %.1f",number);
}