/*Solicitar a idade de um número indefinido de  pessoas e imprimir a média de idade lidas. O programa se encerra quando a média de idade for superior a 20 anos.*/
#include <stdio.h>

int main(){
    int idade, cont = 0;
    float media, soma = 0;

    do{
        cont++;
        printf("Informe a idade da pessoa %i: \n", cont);
        scanf("%d%*c", &idade);
        soma = soma + idade;
        media=soma/cont;
    }while(media<20);
        printf("Finalizado programa, media das idades ultrapassou 20: %.2f \n", media);

    return 0;
}