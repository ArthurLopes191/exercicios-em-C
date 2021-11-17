/*Escrever um programa, que leia valores inteiros até ser lido o valor-99. Quando isso acontecer o programa deverá escrever a soma e a média dos valores lidos*/
#include <stdio.h>

int main(){
     int numeros;
     int soma=0;
     float media;
     int cont=0;
    do{
        printf("Digite o valor: \n");
        scanf("%d%*c", &numeros);
        cont++;
        soma=soma+numeros;
    }
    while (numeros!=-99);
        soma = soma + 99;
        cont= cont - 1;
        media=soma/cont;
        printf("O valor da soma dos numeros eh %d e a media eh %.2f \n", soma, media);

     return 0;
}