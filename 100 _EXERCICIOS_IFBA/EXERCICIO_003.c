//3. Dado o tamanho do raio de uma circunferência, calcular a área e o perímetro da mesma.
#include "stdio.h"
#define PI 3.1415926535897

int main(){
    float raio,area,perimetro;
    printf("--------------------------\n");
    printf("        CIRCUNFERENCIA            ");
    printf("\n--------------------------\n");
    printf("\ndigite o tamanho do raio de uma circunferencia:");
    scanf("%f",& raio);
    printf("analisando dados...");

    area = PI * raio*raio;
    perimetro = 2*PI*raio;

    system("cls");
    printf("-------------------------\n");
    printf("\nRaio: %.2f",raio);
    printf("\nArea: %.2f",area);
    printf("\nPerimetro: %.2f",perimetro);
    printf("\n-------------------------\n");
    return 0;
}