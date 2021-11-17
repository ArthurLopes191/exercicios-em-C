/*Solicitar a idade de várias pessoas e imprimir: Total de pessoas com menos de 21 anos. Total de pessoas com mais de 50 anos. O programa termina quando idade for =-99 */
#include <stdio.h>

int main(){
    int idade;
    int cont21=0;
    int cont50=0;

    do{
        printf("Digite a idade: \n");
        scanf("%d%*c", &idade);
        if((idade<21)&&(idade>0)){
            cont21++;
        }
        if(idade>50){
            cont50++;
        }
    }while (idade!=-99);
        printf("Total de pessoas com menos de 21 anos eh: %d \n", cont21);
        printf("Total de pessoas com mais de 50 anos eh: %d \n", cont50);
    return 0;   
}