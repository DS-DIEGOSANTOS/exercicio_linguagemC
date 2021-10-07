/* Em uma cidade se deseja sincronizar os semáforos. Com isto, quando um semáforo abre 
(fica verde), os veículos que nele estavam parados tendem a encontrar os próximos 
semáforos também abertos. Para que isto seja feito, os próximos semáforos precisam 
abrir um pouco depois, dependendo da velocidade permitida na via e da distância entre 
eles. Assim, ao abrir o semáforo, um veículo começa a acelerar até atingir a velocidade 
permitida, que mantém até chegar ao próximo semáforo, levando um certo tempo para 
percorrer essa distância. Para que encontre o próximo semáforo aberto, este deve abrir 
um pouco antes da chegada do veículo (por ex: 3 segundos antes). Faça assim um 
algoritmo que informe quanto tempo depois um semáforo deve abrir, dada as seguintes 
informações: 
a. a distância desde o semáforo anterior
b. a velocidade permitida da via
c. a aceleração típica dos carros */

#include "stdio.h"
int main(){
    float distancia,acelercao,velocidade_max,t1,t2,d1,d2,tempo_total;
    printf("---------------------------------\n");
    printf("  EXERCICIO 014\n");
    printf("---------------------------------\n");
    printf("a distancia desde o semaforo anterior:");
    scanf("%f",& distancia);
    printf("a velocidade permitida da via:");
    scanf("%f",& velocidade_max);
    printf("a aceleracao tipica dos carros:");
    scanf("%f",& acelercao);

    t1 = velocidade_max/acelercao;
    d1 = (acelercao*t1*t1)/2;
    d2 = distancia-d1;
    t2 = d2/velocidade_max;

    tempo_total = t1+t2;

    printf("tempo do proximo semaforo: %.2f",tempo_total-3);
    return 0;
}