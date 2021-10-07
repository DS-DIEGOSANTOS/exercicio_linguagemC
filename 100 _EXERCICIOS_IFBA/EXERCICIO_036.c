/* 36. Em uma certificação são feitos são feitos 5 exames (I, II, III, IV e V). Escreva um 
programa que leia as notas destes exames e imprima a classificação do aluno, sabendo 
que a média é 70. 
Classificação:
A – passou em todos os exames;
B – passou em I, II e IV, mas não em III ou V;
C – passou em I e II, III ou IV, mas não em V.
Reprovado – outras situações */

#include "stdio.h"
#define average 70



int main(){
    
    float note[5]; //responsible for store note
    int hits = 0;
    char classification;


    printf("---------------------------------\n");
    printf("  EXERCICIO 036\n");
    printf("\n---------------------------------\n");

    for(int i = 0; i<5 ; i++ ){
     
        printf("nota %d:", i+1);
        scanf("%f",& note[i]);
       
    }

    for(int i = 0; i<5 ; i++ ){
     
        if(note[i]>=average){
            hits++;
        }
       
    }

    switch (hits)
    {
    case 4:classification ='B';break;  
    case 3:classification ='C';break;     
    case 2:classification ='D';break;    
    case 1:classification ='E';break;   
    }
 
    
    if ( hits==5){
       
        printf("A - aprovado em todas");
        exit(1);
    }

    if ( hits==0){
       
        printf("Reprovado – outras situações");
        exit(1);

    }


   
    printf("%c - Passou em ", classification);

    if(note[0]>= average){
        printf("I,");
    }
    if(note[1]>= average){
        printf("II,");
    }
    if(note[2]>= average){
        printf("III,");
    }
    if(note[3]>= average){
        printf("IV,");
    }
    if(note[4]>= average){
        printf("V,");
    }
    
    printf(" mas nao em ");
    
    if(note[0]< average){
        printf("I,");
    }
    if(note[1]<average){
        printf("II,");
    }
    if(note[2]< average){
        printf("III,");
    }
    if(note[3]< average){
        printf("IV,");
    }
    if(note[4]< average){
        printf("V,");
    }
    

}


 