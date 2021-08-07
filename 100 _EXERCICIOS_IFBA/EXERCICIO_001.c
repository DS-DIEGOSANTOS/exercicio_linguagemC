//Dado o tamanho da base e da altura de um retângulo, calcular a sua área e o seu perímetro.
#include "stdio.h"
#include "windows.h"

int main(){
    float base,altura,area;
    printf("----------------------------\n");
    printf("\ndigite a base do triangulo em metros:");
    scanf("%f",& base);
    printf("\ndigite a altura do triangulo em metros:");
    scanf("%f",& altura);

    area = base*altura/2;

    printf("\n\n\nanalizando os dados..");
    sleep(2);

    system("cls");

    printf("----------------------------");
    printf("\n\nBase: %.2f",base);
    printf("\nAltura: %.2f", altura);
    printf("\nArea em metros quadrado: %.2f", area);
    printf("\n--------------------------\n");
    system("pause");

    return 0;
}