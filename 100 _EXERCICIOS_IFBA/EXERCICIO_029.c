/*Escreva um programa que calcula o desconto previdenciário de um funcionário. Dado um 
salário, o programa deve retornar o valor do desconto proporcional ao mesmo. O cálculo 
segue a regra: o desconto é de 11% do valor do salário, entretanto, o valor máximo de 
desconto é 334,29, o que seja menor*/
#include "stdio.h"
#include "stdlib.h"
int main(){
    float salario,desconto;
    printf("digite o valor do salario:");
    scanf("%f",& salario);
    desconto=salario*0.11;
    if(desconto>334.29){
        desconto = 334.29;
    }
    printf("desconto: %.2f",desconto);

}