/*No Futebol Americano, usa-se o Quarterback Rating como um índice que indica o 
desempenho do quarterback (quando maior, melhor). Ele é calculado como indicado a 
seguir: Calcula-se o percentual de passes completados em relação aos passes tentados 
pelo quarterback. Deste valor subtrai-se 0,3 e divide-se por 0,2. Este valor não deve ser 
maior que 2,375 ou menor que 0 (caso seja, ajusta-se o valor para 2,375 ou 0, 
respectivamente). 
Em seguida, calcula-se a razão de jardas passadas pela quantidade de passes tentados. 
Deste valor, subtrai-se 3 e divide-se por 4. Novamente, este valor não deve ser maior que 
2,375 ou menor que 0 (caso seja, procede-se como no caso anterior).
Agora, calcula-se a razão de passes para touchdows pelo número de passes tentados. 
Divide-se o valor por 0,05. Mais uma vez, este valor não deve ser maior que 2,375 ou 
menor que 0 (caso seja, procede-se como de costume).
Então, calcula-se a razão entre passes interceptados e o número de passes tentados. Deste 
valor, subtrai-se 0,095 e divide-se o resultado por 0,04. Como de praxe, este valor não 
deve ser maior que 2,375 ou menor que 0 (caso seja, atua-se como explicado).
O quarterback rating é calculando somando-se as quatro parcelas anteriores, 
multiplicando a soma por 100 e dividindo-se o produto por 6.
Escreva um programa, que leia o número de passes tentados, o número de passes 
completos, o número de jardas passadas, o número de passes para touchdown e o número 
de passes interceptados e informe o QB Rating do quarterback*/
#include "stdio.h"
#include "stdlib.h"
int main(){
    int passe_c,passe_t,jardas_p,touch_T,passe_i;
    float passe_r,jadas_r,touchdows_r,interceptados_r,q_rating;
    printf("passes completos:");
    scanf("%d", & passe_c);
    printf("tentativa de passe:");
    scanf("%d",& passe_t);
    passe_r =  ((passe_c/passe_t)-0.3)/0.2;
    
    
    if(passe_r>2.375){
        passe_r = 2.375;
    }
    if(passe_r < 0){
        passe_r = 0;
    }
    printf("jardas passadas:");
    scanf("%d", & jardas_p);

    jadas_r = (((jardas_p/passe_t)-3)/4);

    
    if(jadas_r>2.375){
        jadas_r =2.375;
    }
    if(jadas_r<0){
        jadas_r = 0;
    }
    printf("passes para touchdows");
    scanf("%d", & touch_T);

    touchdows_r = ((touch_T/passe_t)/0.05);

    
    if(touchdows_r>2.375){
        touchdows_r =2.375;
    }
    if(touchdows_r<0){
        touchdows_r = 0;
    }
    printf("passes interceptado:");
    scanf("%d",& passe_i);
    interceptados_r = (((passe_i/passe_t)-0.095)/0.04);
    
    if(interceptados_r>2.375){
        interceptados_r =2.375;
    }
    if(touchdows_r<0){
        interceptados_r = 0;
    }

    q_rating = (passe_r+jadas_r+touchdows_r+interceptados_r)*100/6;

    printf("\ntentativa de passe: %d", passe_t);
    printf("\npasses completos: %d", passe_c);
    printf("\njardas passadas: %d", jardas_p);
    printf("\npasses para touchdows: %d", touch_T);
    printf("\npasses interceptado: %d", passe_i);
    printf("\nQB Rating: %.2f",q_rating);



}