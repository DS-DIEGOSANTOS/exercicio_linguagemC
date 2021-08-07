//23. Escreva um programa que leia um número e imprima se este número é ou não par.
#include "stdio.h"
int main(){
    int a;
    printf("---------------------------------\n");
    printf("  EXERCICIO 023\n");
    printf("\n---------------------------------\n");
    printf("digite um valor:");
    scanf("%d",& a);

    if(a/2==0){
        printf("o valor e par");
    }else{
        printf("o valor e impar");
    }
}