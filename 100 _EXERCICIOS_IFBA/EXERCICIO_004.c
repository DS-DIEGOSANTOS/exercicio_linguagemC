//4. Dado os três lados de um triângulo determinar o perímetro do mesmo. 
#include "stdio.h"
int main(){
    float lado1,lado2,lado3,perimetro;

    printf("--------------------------\n");
    printf("  TRIANGULO PERIMETRO            ");
    printf("\n--------------------------\n");
    printf("lado 1:");
    scanf("%f", & lado1);
    printf("lado 2:");
    scanf("%f",& lado2);
    printf("lado 3:");
    scanf("%f",& lado3);
    printf("\n\nanalisando dados...");
    
    perimetro = lado1+lado2+lado3;
    system("cls");
    printf("--------------------------\n");
    printf("  TRIANGULO PERIMETRO            ");
    printf("\n--------------------------\n");
    printf("\nlado 1: %.2f",lado1);
    printf("\nlado 2: %.2f",lado2);
    printf("\nlado 3: %.2f",lado3);
    printf("\nperimetro: %.2f",perimetro);
    printf("\n--------------------------\n");
    system("pause");
    return 0;
    }