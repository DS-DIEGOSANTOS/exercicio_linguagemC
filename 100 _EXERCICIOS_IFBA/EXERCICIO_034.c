/* Uma financeira usa o seguinte critério para conceder empréstimos: o valor total do 
empréstimo deve ser até dez vezes o valor da renda mensal do solicitante e o valor da 
prestação deve ser no máximo 30% da renda mensal do solicitante. Escreva um programa 
que leia a renda mensal de um solicitante, o valor total do empréstimo solicitado e o 
número de prestações que o solicitante deseja pagar e informe se o empréstimo pode ou 
não ser concedido  */

#include "stdio.h"

int main(){
    float renda,valor_Emprestimo;
    int Prestacao;

    printf("---------------------------------\n");
    printf("  EXERCICIO 034\n");
    printf("\n---------------------------------\n");


    printf("valor solicidado:");
    scanf("%f",& valor_Emprestimo );

    printf("numero de prestacao:");
    scanf("%d",& Prestacao );

    printf("Renda mensal:");
    scanf("%f",& renda );

    if(renda*10>=valor_Emprestimo && renda*3/100>=valor_Emprestimo/Prestacao){
        printf("valor solicidado: %.2f\n", valor_Emprestimo);
        printf("numero de prestacao: %d\n", Prestacao);
        printf("Renda mensal: %.2f\n", renda);
        printf("\nsituacao Aprovada");
    }
    else{

        printf("valor solicidado: %.2f\n", valor_Emprestimo);
        printf("numero de prestacao: %d\n", Prestacao);
        printf("Renda mensal: %.2f\n", renda);
        printf("\nsituacao Reprovado");

    }
    
}