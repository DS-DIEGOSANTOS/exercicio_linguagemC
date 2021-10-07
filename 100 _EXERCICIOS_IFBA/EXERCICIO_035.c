/*  Escreva um programa que leia um número inteiro de 1 a 7 e informe o dia da semana 
correspondente, sendo domingo o dia de número 1. Se o número não corresponder a um 
dia da semana, mostre uma mensagem de erro */

#include "stdio.h"

int main(){
    
    int typed_number;

    printf("---------------------------------\n");
    printf("  EXERCICIO 035\n");
    printf("\n---------------------------------\n");

    printf("informe um numero inteiro do dia da semana:");
    scanf("%d",& typed_number);

    switch (typed_number){
            
        case 1: printf("Domingo"); break;       
        case 2: printf("Segunda"); break;
        case 3: printf("Terca"); break;
        case 4: printf("Quarta"); break;
        case 5: printf("Quinta"); break;
        case 6: printf("Sexta"); break;
        case 7: printf("Sabado"); break;

        default: printf("ERRO! o numero nao corresponde a um dia da semana"); break;
    }
    
    
}