//2. Dado o tamanho do lado de um quadrado, calcular a área e o perímetro do mesmo.
#include "stdio.h"


int main(){
    float lado,area,perimetro;
    printf("--------------------------\n");
    printf("        quadrado            ");
    printf("\n--------------------------\n");
    printf("\ndigite o valor do lado do quadrado em metros:");
    scanf("%f",& lado);

    printf("analisando dados...");
    
    perimetro = 4*lado;
    area = lado*lado;
    
    system("cls");

    printf("------------------------------\n");
    printf("\n\nvalor do lado: %.2f", lado);
    printf("\narea: %.2f",area);
    printf("\nperimetro: %.2f", perimetro);
    printf("\n------------------------------\n");

    system("pause");
    return 0;
}