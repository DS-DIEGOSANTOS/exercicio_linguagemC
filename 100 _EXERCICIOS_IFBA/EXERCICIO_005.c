//5. Ler um número inteiro e exibir o seu sucessor.
#include "stdio.h"

int main(){
    int numero,antecessor,sucessor;
    printf("--------------------------\n");
    printf("  sucessor e antecessor          ");
    printf("\n--------------------------\n");
    printf("\ndigite um numero:");
    scanf("%d",& numero);

    antecessor = numero-1;
    sucessor = numero+1;

    system("cls");
    printf("--------------------------\n");
    printf("\nantecessor: %d",antecessor);
    printf("\nnumero digitado: %d",numero);
    printf("\nsucessor: %d",sucessor);    
    printf("\n--------------------------\n");
    system("pause");
    return 0;
}    