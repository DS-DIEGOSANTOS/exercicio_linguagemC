/* Escreva um algoritmo que leia o número de litros vendidos e o tipo de combustível 
(codificado da seguinte forma: A-álcool, G-gasolina), calcule e imprima o valor a ser 
pago pelo cliente sabendo-se que o preço do litro da gasolina é R$ 2,70 e o preço do litro 
do álcool é R$ 1,90. */
#include "stdio.h"
int main (){
    int opcao,litros;
    float valor,desconto,valor_total;
    do{
    printf("SEJA BEM VINDO\n");
    printf("1 -  A-alcool\n");
    printf("2 -  G-gasolina\n");
    printf("escolha sua opcao:");
    scanf("%d",& opcao);
    printf("quantidade em litros:");
    scanf("%d",& litros);
    system("cls");
    }while(opcao < 1 || opcao > 2 || litros<0);

    

    switch (opcao){
    case 1:
        valor = 1.9*litros;

        if(litros<=25){
            desconto = valor*0.02;
            valor_total = valor-desconto;
        }
        else if(litros>25){
            desconto = valor*0.04;
            valor_total = valor-desconto;
        }
        break;
    
    case 2:
        valor = 2.70*litros;
        if(litros<=25){
            desconto = valor*0.03;
            valor_total = valor-desconto;
        }
        else if(litros>25){
            desconto = valor*0.05;
            valor_total = valor-desconto;
        }
        break;
    }
    printf("total: %.2f",valor_total);
}