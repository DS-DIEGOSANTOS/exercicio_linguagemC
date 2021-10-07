//Converter um inteiro informado menor que 32 para sua representação em binário
#include "stdio.h"
#include "stdlib.h"
#include "math.h"
int main (){
    int numero,resultado,bin[6];
    printf("---------------------------------\n");
    printf("  EXERCICIO 010\n");
    printf("---------------------------------\n");
    printf("digite um numero(menor que 32):");
    scanf("%d",& numero);
    if(numero>32){
        printf("numero maior do que informado");
        system("pause");
        exit(1);
    }

    for(int a=0;a<6;a++){
        resultado = numero%2;

        if(resultado==1){
            bin[a]=1;
        }

        if(resultado==0){
            bin[a]=0;
        }
        
        numero = numero/2;
    }

    for(int a=5;a>=0;a--){
        printf("%d",bin[a]);
    }
    
    return 0;
}
