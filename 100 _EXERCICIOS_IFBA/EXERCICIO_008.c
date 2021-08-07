//Dado que a fórmula para conversão de Fahrenheit para Celsius é C = 5/9 (F – 32), leu um 
//valor de temperatura em Fahrenheit e exibi-lo em Celsius
#include "stdio.h"
int main (){
    int Fahrenheit,celsius;
    printf("---------------------------------\n");
    printf("  CONVESOR DE TEMPERATURA\n");
    printf("---------------------------------\n");
    printf("\nvalor em Fahrenheit:");
    scanf("%d",& Fahrenheit);
    system("cls");
    celsius = (Fahrenheit-32)*5/9;
    
    printf("---------------------------------\n");
    printf("  CONVESOR DE TEMPERATURA\n");
    printf("---------------------------------\n\n");
    printf("\nvalor em celsius: %d\n",celsius);
    system("pause");
}