/*Escreva um programa que leia um caracter e diga se ele é uma vogal, consoante, número 
ou um símbolo (qualquer outro caracter, que não uma letra ou número).*/
#include "stdio.h"
#include "ctype.h"
int main(){
    char caracter;
    int a;
    printf("digite um caracter:");
    scanf("%c", & caracter);

    if(isalpha(caracter))
        if(caracter == "a" || caracter =="A" || caracter =="e" || caracter=="E" || caracter=="i" || caracter== "I" || caracter== "o" || caracter =="O" || caracter =="u" || caracter =="U")
            printf("\nvogal");
        else
            printf("\nconsoante");
    else if(isalnum(caracter))
        printf("e um numero");
    else
        printf("e um simbolo");      
   
   
}