/*. Em diversas situações, é útil o uso de dígitos verificadores. Dígito 
verificador ou algarismo de controle é um mecanismo de autenticação utilizado para 
verificar a validade e a autenticidade de um valor numérico, evitando dessa forma fraudes 
ou erros de transmissão ou digitação. Uma das formas mais comuns de cálculo de dígito 
verificadores é o método conhecido por módulo 11. O cálculo do DV no módulo 11 é 
feito, é feito como se segue: para calcular o primeiro dígito verificador, cada dígito do 
número, começando da direita para a esquerda (do dígito menos significativo para o 
dígito mais significativo) é multiplicado, na ordem, por 2, depois 3, depois 4 e assim 
sucessivamente, até o primeiro dígito do número. O somatório dessas multiplicações 
dividido por 11. O resto desta divisão (módulo 11) é subtraído da base (11), o resultado é 
o dígito verificador. O Banco do Brasil utiliza o código módulo 11, substituindo por X o 
valor do dígito verificador quando este é 10. Escreva um programa que receba um 
número com os 4 primeiros dígitos de uma agência e imprima o número da agência 
completo (numero – dv)*/

#include "stdio.h"
int main (){

    int numero,a,b,c,d,resto;
    float resultado;

    printf("digite os 4 primeiro digito da agencia:");
    scanf("%d",& numero);

    a=numero/1000;
    resto = numero%1000;

    b=resto/100;
    resto%=100;

    c=resto/10;

    d=resto%10;5;

    resultado = ((a*5)+(b*4)+(c*3)+(d*2))/11.0;

    resultado = 11-resultado;

    printf("%d-%.0f",numero,resultado);
}