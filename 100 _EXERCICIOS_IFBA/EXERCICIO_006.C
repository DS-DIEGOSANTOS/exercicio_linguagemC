//6. Ler dois números inteiros e exibir o quociente e o resto da divisão inteira entre eles.
#include "stdio.h"
#include "stdlib.h"

int main(){
    int dividendo,divisor,quociente,resto;  
    divisor = 0;

    while(divisor==0){
        printf("--------------------------\n");
        printf("           DIVISAO          ");
        printf("\n--------------------------\n");
        printf("\ndividendo:");
        scanf("%d",& dividendo);
        printf("\ndivisor:");
        scanf("%d",& divisor);

        if(divisor==0){
            printf("\nerro! o divisor nao pode ser igual a zero");
            system("pause");
        }
        system("cls");
    }

    quociente = dividendo/divisor;
    resto = dividendo%divisor;

    printf("--------------------------\n");
    printf("           RESULTADO          ");
    printf("\n--------------------------\n");
    printf("\nQuociente: %d",quociente);
    printf("\nResto: %d", resto);
    printf("\n--------------------------\n");
    system("pause");



}