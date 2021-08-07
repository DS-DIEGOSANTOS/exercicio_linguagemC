/*Um programa para gerenciar os saques de um caixa eletrônico deve possuir algum 
mecanismo para decidir o número de notas de cada valor que deve ser disponibilizado 
para o cliente que realizou o saque. Um possível critério seria o da "distribuição ótima" 
no sentido de que as notas de menor valor fossem distribuídas em número mínimo 
possível. Por exemplo, se a quantia solicitada fosse R$ 87,00, o programa deveria indicar 
uma nota de R$ 50,00, três notas de R$ 10,00, uma nota de R$ 5,00 e duas notas de R$ 
1,00. Escreva um programa que receba o valor da quantia solicitada e retorne a
distribuição das notas de acordo com o critério da distribuição ótima (considere existir 
notas de R$1,00; R$2,00; R$5,00; R$10,00; R$20,00; R$50,00 e R$100,00)*/
#include "stdlib.h"
#include "stdio.h"
int main(){
    int valor;
    printf("---------------------------------\n");
    printf("  EXERCICIO 017\n");
    printf("---------------------------------\n");
    printf("\ndigite o valor do saque:");
    scanf("%d",& valor);

    if(valor/100!=0){
        printf("\nnota de 100: %d\n",valor/100);
        valor=valor%100;
    }
    if(valor/50!=0 ){
        printf("nota de 50: %d\n",valor/50);
        valor = valor%50;
    }
    if(valor/20!=0){
        printf("nota de 20: %d\n",valor/20);
        valor = valor%20;
    }
    if(valor/10!=0){
        printf("nota de 10: %d\n",valor/10);
        valor = valor%10;
    }
    if(valor/5!=0){
        printf("nota de 5: %d\n",valor/5);
        valor = valor%5;
    }
    if(valor/2!=0){
        printf("nota de 2: %d\n",valor/2);
        valor = valor%2;
    }
    if(valor/1!=0){
        printf("nota de 1: %d",valor/1);
        valor = valor%1;
    }

}