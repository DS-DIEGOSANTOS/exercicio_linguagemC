//21. Escreva um programa que leia um número e exiba se ele é positivo ou negativo.
#include "stdio.h"
int main(){
    int a;
    printf("---------------------------------\n");
    printf("  EXERCICIO 021\n");
    printf("\n---------------------------------\n");
    printf("\ndigite um numero:");
    scanf("%d",& a);
    if(a>=0){
        printf("\no numero e positivo");
    }
    if(a<=0){
        printf("\no numero e negativo");
    }

}
