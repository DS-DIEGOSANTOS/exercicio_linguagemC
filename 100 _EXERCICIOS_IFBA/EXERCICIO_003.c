//3. Dado o tamanho do raio de uma circunferência, calcular a área e o perímetro da mesma.
#include "stdio.h"
#include "math.h"
#include "windows.h"

int main(){
    float raio,area,perimetro;
    printf("--------------------------\n");
    printf("        CIRCUNFERENCIA            ");
    printf("\n--------------------------\n");
    printf("\ndigite o tamanho do raio de uma circunferencia:");
    scanf("%f",& raio);
    printf("analisando dados...");
    sleep(2);
    //array´s para ser ultilazada como calculo 
    area = M_PI*pow(raio,2);
    perimetro =2*M_PI*raio;

    system("cls");
    printf("-------------------------\n");
    printf("\nRaio: %.2f",raio);
    printf("\nArea: %.2f",area);
    printf("\nPerimetro: %.2f",perimetro);
    printf("\n-------------------------\n");
}