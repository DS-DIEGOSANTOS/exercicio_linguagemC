//18. Escreva um programa que permute o valor de duas variáveis inteiras.
#include "stdio.h"
int main(){
    int a,b,c;
    printf("---------------------------------\n");
    printf("  EXERCICIO 018\n");
    printf("\n---------------------------------\n");
    printf("digite o valor de a:");
    scanf("%d",& a);
    printf("digite o valor de b:");
    scanf("%d",& b);
    printf("%4d%4d\n", a, b);
    c=a;
    a=b;
    b=c;
    printf("%4d%4d\n", a, b);
    system("pause");

}