//26. Escreva um programa que leia 3 valores e escreva a soma dos 2 maiores.
#include "stdio.h"
#include "stdlib.h"

int main (){

    int valor_1, valor_2, valor_3,maior_1=0,maior_2=0,soma;

    printf("digite o valor 1: ");
    scanf("%d",& valor_1);
    printf("digite o valor 2: ");
    scanf("%d", & valor_2);
    printf("digite o valor 3: ");
    scanf("%d",& valor_3);

    if(valor_1>=valor_2 && valor_1>=valor_3){
        maior_1=valor_1;
    }    
    else if(valor_2>=valor_1 && valor_2>=valor_3){
        maior_1=valor_2; 
    }    
    else if(valor_3>=valor_2 && valor_3>=valor_1){
        maior_1=valor_3;    
    }

    if(valor_1!=maior_1)
        if(valor_1>=maior_2)
            maior_2 = valor_1;

    if(valor_2!=maior_1)
        if(valor_2>=maior_2)
            maior_2 = valor_2;

    if(valor_3!=maior_1)
        if(valor_3>=maior_2)
            maior_2 = valor_3;    

    if(valor_1==valor_2 || valor_1==valor_3 || valor_2==valor_3){
        maior_1=valor_1;
        maior_2=maior_1;
    }
    
    soma = maior_1+maior_2;
    printf("soma dos 2 maiores: %d",soma );   
}  
