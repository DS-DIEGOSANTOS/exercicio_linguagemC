// Faça um algoritmo que transforme uma velocidade fornecida em m/s pelo usuário para 
//Km/h. Para tal, multiplique o valor em m/s por 3,6.
#include "stdio.h"
int main(){
    float v_m;
    printf("---------------------------------\n");
    printf("  EXERCICIO 012\n");
    printf("---------------------------------\n");
    printf("\nvalor em m/s:");
    scanf("%f",& v_m);
    printf("\n\nvalor em km/h:%.2f\n",v_m*3.6);
    system("pause");
    
}