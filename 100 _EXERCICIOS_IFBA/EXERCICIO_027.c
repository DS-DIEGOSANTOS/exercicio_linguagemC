/* Escreva um programa que leia 3 números e calcule a média ponderada entre eles. 
Considere que o maior número recebe peso 5 e os outros dois recebem peso 2,5*/
#include "stdlib.h"
#include "stdio.h"
#define valores 3
int main (){
    float a[valores],maior=0,menor1=0,menor2=0,media;
    for(int i=0;i<valores;i++){
        printf("digite o valor %d:",i+1);
        scanf("%f",& a[i]);
    }

    for(int i=0;i<valores;i++){
        if(a[i]>maior)
            maior=a[i];
        
    }

    for(int i=0;i<valores;i++){
        if(a[i]!=maior)
            if(a[i]>menor1)
                menor1=a[i];
            else
                menor2=a[i];             
    }

    maior = maior*5.0;
    menor1= menor1*2.5;
    menor2= menor2*2.5;
    media=(maior+menor2+menor1)/10.0;

    printf("media: %.2f  ", media);

}