//Escreva um programa que leia uma letra e mostre se ela é vogal ou consoante.
#include "ctype.h"
#include "stdio.h"
int main(){
    char letra;
    printf("digite uma palavra:");
    scanf("%c", & letra);

    if(isalpha(letra)){
        if(islower(letra)){
            printf("minuscula");

        }
        if(isupper(letra)){
            printf("MAIUSCULA");

        }
    }
}