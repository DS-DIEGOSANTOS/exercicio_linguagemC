// Faça um algoritmo que transforme uma velocidade fornecida em m/s pelo usuário para 
//Km/h. Para tal, multiplique o valor em m/s por 3,6.
#include "stdio.h"
int main(){
    float VELOCIDADE_M, VELOCIDADE_KM ;
    printf("---------------------------------\n");
    printf("  EXERCICIO 012\n");
    printf("---------------------------------\n");
    printf("\nvalor em m/s:");
    scanf("%f",& VELOCIDADE_M);

    VELOCIDADE_KM = VELOCIDADE_M*3.6;

    printf("\n\nvalor em km/h:%.2f\n",VELOCIDADE_KM);
    system("pause");

    return 0;

}