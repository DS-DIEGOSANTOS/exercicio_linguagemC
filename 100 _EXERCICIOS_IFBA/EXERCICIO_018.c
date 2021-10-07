//18. Escreva um programa que permute o valor de duas variáveis inteiras.
#include "stdio.h"
int main(){
    int a,b,c;
    printf("---------------------------------\n");
    printf("  EXERCICIO 018\n");
    printf("\n---------------------------------\n");
    printf("Digite o valor de a:");
    scanf("%d",& a);
    printf("Digite o valor de b:");
    scanf("%d",& b);

    c=a;
    a=b;
    b=c;
   
    printf("\nvalor permudado");
    printf("\nvalor de a: %d",a);
    printf("\nvalor de b: %d",b);

    return 0;
}