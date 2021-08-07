//Num dia de sol, você deseja medir a altura de um prédio, porém, a trena não é 
//suficientemente longa. Assumindo que seja possível medir sua sombra e a do prédio no 
//chão, e que você lembre da sua altura, faça um programa para ler os dados necessários e 
//calcular a altura do prédio.

#include "stdio.h"
int main(){
    float altura,s_predio,s_pessoa,altura_predio;
    printf("---------------------------------\n");
    printf("  EXERCICIO 015\n");
    printf("---------------------------------\n");
    printf("\nsua altura");
    scanf("%f",& altura);
    printf("sua sombra:");
    scanf("%f",& s_pessoa);
    printf("\nsombra do predio:");
    scanf("%f",& s_predio);
    altura_predio = altura*s_predio/s_pessoa;
    printf("altura do predio: %.2f",altura_predio);    
}