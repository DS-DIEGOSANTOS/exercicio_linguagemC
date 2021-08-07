//algoritmo que calcule e apresente o valor do volume de uma lata de óleo, dado 
//seu raio e sua altura
#include "stdio.h"
#include "stdlib.h"
#include "math.h"

int main(){
    int raio,altura,total,area_base,area_lateral;
    printf("---------------------------------\n");
    printf("  EXERCICIO 009\n");
    printf("---------------------------------\n");
    printf("\ndigite as informacoes a seguir\n");
    printf("\nRaio:");
    scanf("%d",& raio);
    printf("\nAltura:");
    scanf("%d",& altura);
    system("cls");
    area_base = 2*(M_PI*pow(raio,2));
    area_lateral = 2*M_PI*raio*altura; 
    total = area_base + area_lateral;
    
    printf("area total: %d",total);    
}
