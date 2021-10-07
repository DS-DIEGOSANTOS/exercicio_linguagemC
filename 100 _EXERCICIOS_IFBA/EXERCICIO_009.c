//algoritmo que calcule e apresente o valor do volume de uma lata de óleo, dado 
//seu raio e sua altura
#include "stdio.h"
#define PI  3.14


int main(){
    float raio,altura,total,area_base,area_lateral;
    printf("---------------------------------\n");
    printf("  EXERCICIO 009\n");
    printf("---------------------------------\n");
    printf("\ndigite as informacoes a seguir\n");
    printf("Raio:");
    scanf("%f",& raio);
    printf("Altura:");
    scanf("%f",& altura);


    area_base = PI*raio*raio;
    area_lateral = 2*PI*raio*altura; 
    total = 2*area_base + area_lateral;
    
    printf("area total: %.2f",total);
    
    return 0;
}
