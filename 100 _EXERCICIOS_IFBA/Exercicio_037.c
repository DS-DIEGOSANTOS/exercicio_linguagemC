/*Uma Cia de pulverização utiliza avião para pulverizar lavouras. Os custos de 
pulverização dependem do tipo de praga e da área a ser contratada conforme a tabela:
Tipo 1 – ervas daninhas R$ 50,00 por acre;
Tipo 2 – gafanhotos R$ 100,00 por acre;
Tipo 3 – broca R$ 150,00 por acre;
Tipo 4 – todos acima R$ 250,00 por acre.
Se a área a ser pulverizada for superior a 1000 acres, o fazendeiro tem um desconto de 
5%. Em adição, qualquer fazendeiro cujo custo for maior do que R$ 750,00 tem um 
desconto de 10% sobre o valor que ultrapassar os R$ 750,00. Caso ambos os descontos se 
aplicam o da área é calculado antes. Fazer um algoritmo que leia: o tipo de pulverização 
(1 a 4) e área a ser pulverizada; e imprima o valor a ser pago.*/

#include "stdio.h"

int main (){
    int TIPO;
    float ACRES, VALOR_TIPO, VALOR_TOTAL, desconto;

    printf("Tipo 1 - ervas daninhas R$ 50,00 por acre\n");
    printf("Tipo 2 - gafanhotos R$ 100,00 por acre\n");
    printf("Tipo 3 - broca R$ 150,00 por acre\n");
    printf("Tipo 4 - todos acima R$ 250,00 por acre\n");
    printf("\nEscolha um tipo:");
    scanf("%d",& TIPO);
    printf("area a se pulverizada por acres:");
    scanf("%f",& ACRES);

    switch (TIPO){
        case 1: VALOR_TIPO = 50; break;
        case 2: VALOR_TIPO = 100; break;
        case 3: VALOR_TIPO = 150; break;
        case 4: VALOR_TIPO = 250;break;
    }

    if(ACRES>1000)
        VALOR_TOTAL = VALOR_TIPO*ACRES*0.95;
    else
        VALOR_TOTAL = VALOR_TIPO*ACRES;



    if (VALOR_TOTAL>750){
        desconto = VALOR_TOTAL - 750;
        VALOR_TOTAL-=desconto;
        desconto*=0.90;
        VALOR_TOTAL+=desconto; 
    }
   
        
    printf("valor a ser pago: %.2f ",VALOR_TOTAL);

}