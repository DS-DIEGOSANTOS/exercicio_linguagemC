//Escreva um programa que leia o número equivalente ao mês e imprima a quantidade de 
//dias deste mês
#include "stdio.h"
int main(){
    int a;
    printf("---------------------------------\n");
    printf("  EXERCICIO 025\n");
    printf("\n---------------------------------\n");
    printf("digite o valor equivalente do mes:");
    scanf("%d",& a);
    printf("\n");
    if(a ==4 || a==6 || a==9 || a ==11){
        printf("possui 30 dias");
    }
    else if(a==1 || a==3 || a==5 || a==7 || a==8 || a==10 || a==12){
        printf("possui 31 dias");
    }
    else if(a==2){
        printf("possui 28 dias\nem anos bisesto 29 dias");
    }
    else{
        printf("erro...so existem 12 meses");
    }
}