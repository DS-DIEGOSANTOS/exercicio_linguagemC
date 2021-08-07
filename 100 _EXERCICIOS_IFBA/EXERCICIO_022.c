//22. Escreva um programa que leia um número e exiba o seu módulo.
#include "stdio.h"
int main (){
    int a;
    printf("---------------------------------\n");
    printf("  EXERCICIO 022\n");
    printf("\n---------------------------------\n");
    printf("digite um valor:");
    scanf("%d",& a);
    if(a>=0){
    printf("\nmodulo: %d",a);
    }
    if(a<0){
        a=a*(-1);
        printf("\nmodulo: %d",a);
    }
}