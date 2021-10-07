/*Escreva um programa para gerar o invertido de um número com três algarismos 
(exemplo: o invertido de 498 é 894)*/
#include "stdio.h"
#define algarismo 3

int main(){

    int numero[algarismo];
    printf("---------------------------------\n");
    printf("  EXERCICIO 016\n");
    printf("---------------------------------\n");

    for(int i=0;i<algarismo;i++){
        printf("digite o algarismo %d:",i+1);
        scanf("%d",& numero[i]);
    }

    system("cls");
    
    printf("algoritimo invertido:");
    for(int i =algarismo-1;i>=0;i--){
        printf("%d",numero[i]);
    }

    return 0;
}