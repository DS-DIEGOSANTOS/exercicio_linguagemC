//Um circuito elétrico é composto de duas resistências R1 e R2 em paralelo, e ambas em 
//sequência de uma resistência R3. Faça um algoritmo para calcular a resistência 
//equivalente desse circuito.
#include "stdio.h"
#include "math.h"
int main(){
    float r1,r2,total;
    printf("---------------------------------\n");
    printf("  EXERCICIO 013\n");
    printf("---------------------------------\n");
    printf("\nr1:");
    scanf("%f",&r1);
    printf("\nr2:");
    scanf("%f",&r2);

    
    total = 1/(1/r1 + 1/r2) ;
    printf("\nequivalencia: %.1f\n",total);
    system("pause");
}