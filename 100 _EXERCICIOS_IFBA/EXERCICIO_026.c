//26. Escreva um programa que leia 3 valores e escreva a soma dos 2 maiores.
#include "stdio.h"
#include "stdlib.h"
#define q_valores 3
int main (){
    int a[q_valores],maior=0,maior1=0;
    for(int i=0;i<q_valores;i++){
        printf("digite o valor %d:",i+1);
        scanf("%d",& a[i]);
    }
    for (int i =0; i < q_valores; i++){
        if(a[i]>maior){
            maior=a[i];
        }
    }
    for(int i=0;i<q_valores;i++){
        if(a[i]!=maior){
            if(a[i]>maior1){
                maior1=a[i];
            }
        }
    }
    
    
    printf("soma dos maiores: %d",maior+maior1);
}