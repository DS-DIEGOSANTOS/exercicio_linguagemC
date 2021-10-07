#include "ctype.h"
#include "stdio.h"
int main(){
    char letra;
    printf("digite uma palavra:");
    scanf("%c", & letra);

    if(isalpha(letra))
        if(islower(letra))
            printf("minuscula");      
        else
            printf("MAIUSCULA");    
    
}