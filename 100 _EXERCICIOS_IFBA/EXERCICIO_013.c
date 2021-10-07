//Um circuito elétrico é composto de duas resistências R1 e R2 em paralelo, e ambas em 
//sequência de uma resistência R3. Faça um algoritmo para calcular a resistência 
//equivalente desse circuito.
#include "stdio.h"
int main(){

    float r1,r2,r3,total;

    printf("---------------------------------\n");
    printf("  EXERCICIO 013\n");
    printf("---------------------------------\n");
    printf("R1:");
    scanf("%f",&r1);
    printf("R2:");
    scanf("%f",&r2);
    printf("R3:");
    scanf("%f",& r3);
    
    total = 1/(1/r1 + 1/r2 +1/r3);
    printf("\nequivalencia: %.2f\n",total);
    system("pause");
    
    return 0;
}