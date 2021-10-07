//Dado que a fórmula para conversão de Fahrenheit para Celsius é C = 5/9 (F – 32), leu um 
//valor de temperatura em Fahrenheit e exibi-lo em Celsius
#include "stdio.h"
int main (){
    float Fahrenheit,celsius;
    printf("---------------------------------\n");
    printf("  CONVESOR DE TEMPERATURA\n");
    printf("---------------------------------\n");
    printf("\nvalor em Fahrenheit:");
    scanf("%f",& Fahrenheit);
    system("cls");

    celsius = (Fahrenheit-32)*5/9;
    
    printf("---------------------------------\n");
    printf("  CONVESOR DE TEMPERATURA\n");
    printf("---------------------------------\n\n");
    printf("\nvalor em celsius: %.2f\n",celsius);
    system("pause");
    return 0;
}
