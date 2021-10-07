/*Escreva um algoritmo que leia 2 valores (x e y), que devem representar as coordenadas
de um ponto em um plano. A seguir, determine qual o quadrante ao qual pertence o
ponto, ou se está sobre um dos eixos cartesianos ou na origem (x=y=0).*/

#include "stdio.h"
#include "windows.h"

int main(){
    float x,y;
    printf("---------------------------------\n");
    printf("  EXERCICIO 033\n");
    printf("\n---------------------------------\n");
    printf("digite o valor x:");
    scanf("%f",& x);
    printf("digite o valor Y:");
    scanf("%f",& y);

    Sleep(2);
    system("cls");

    printf("valor do x: %.1f\n", x);
    printf("valor do y: %.1f\n", y);

    if(x>0 && y>0){
        printf("quadrante: 1");
    }

    if(x<0 && y>0){
        printf("quadrante: 2");
    }

    if(x<0 && y<0){
        printf("quadrante: 3");

    }

    if(x>0 && y<0){
        printf("quadrante: 1");

    }

    if(x==0 && y==0){
        printf("está sobre um dos eixos cartesianos ou na origem");
    }
    
    return 0;
}