//24. Escreva um programa que leia três números e mostre o maior entre eles.
#include "stdio.h"
int main(){
    int a,b,c;
    printf("---------------------------------\n");
    printf("  EXERCICIO 024\n");
    printf("\n---------------------------------\n");
    printf("digite o valor 1:");
    scanf("%d",& a);
    printf("digite o valor 2:");
    scanf("%d",& b);
    printf("digite o valor 3:");
    scanf("%d",& c);
    printf("\n");
    if(a>b && a>c){
        printf("o maior valor: %d",a);
    }
    else if(b>a && b>c){
        printf("o maior valor: %d",b);
    }
    else if(c>b && c>a){
        printf("o maior valor: %d",c);

    }
    
}