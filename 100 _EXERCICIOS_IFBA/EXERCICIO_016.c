/*Escreva um programa para gerar o invertido de um número com três algarismos 
(exemplo: o invertido de 498 é 894)*/
#include "stdio.h"
#include "stdlib.h"
#define algoritmo 3

int main(){
    int numero[algoritmo];
    printf("---------------------------------\n");
    printf("  EXERCICIO 016\n");
    printf("---------------------------------\n");
    for(int i=0;i<algoritmo;i++){
        printf("digite o algoritmo %d:",i+1);
        scanf("%d",& numero[i]);
    }
    printf("algoritimo invertido: ");
    for(int i =algoritmo-1;i>=0;i--){
        printf("%d",numero[i]);
    }
}