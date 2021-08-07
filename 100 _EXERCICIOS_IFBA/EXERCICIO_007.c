//7. Solicitar a idade de uma pessoa em dias e informar na tela a idade em anos, meses e dias.
#include "stdio.h"
int main(){
    int anos,meses,dias,total;
    printf("--------------------------\n");
    printf("        EXERCICIO 07            ");
    printf("\n--------------------------\n");

    printf("\nIdade(em anos):");
    scanf("%d",& anos);
    printf("\nidade(em meses):");
    scanf("%d",& meses);
    printf("\nidade(em dias):");
    scanf("%d",& dias);
    system("cls");

    anos = anos*365;
    meses = meses*30;
    total = dias+anos+meses;
    printf("o total de dias: %d\n",total);
    system("pause");

}