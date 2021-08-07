//Faça um algoritmo para calcular a nota semestral de um aluno. A nota semestral é obtida 
//pela média aritmética entre a nota de 2 bimestres. Cada nota de bimestre é composta por 
//2 notas de provas. 
#include "stdio.h"

int main (){
    float prova1_1,prova1_2,prova2_1,prova2_2,bimestre_1,bimestre_2,media;
    printf("---------------------------------\n");
    printf("  EXERCICIO 011\n");
    printf("---------------------------------\n");
    printf("\nprimeiro bimestre");
    printf("\nprova 1:");
    scanf("%f",& prova1_1);
    printf("\nprova 2:");
    scanf("%f",& prova1_2);
    printf("\nsegundo bimestre");
    printf("\n prova 1:");
    scanf("%f",& prova2_1);
    printf("\nprova 2:");
    scanf("%f",& prova2_2);
    printf("\n\nanalisando...");
    system("cls");
    bimestre_1 = prova1_1+prova1_2;
    bimestre_2 = prova2_1+prova2_2;
    media = (bimestre_1+bimestre_2)/2;

    printf("primeriro bimestre: %.2f\n",bimestre_1);
    printf("segundo bimestre: %.2f\n",bimestre_2);
    printf("media: %.2f\n",media);
    system("pause");

    return 0;
}