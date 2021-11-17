/*Escrever um programa que leia, valores inteiros, até ser lido o valor-99. Quando isso acontecer o programa deverá escrever a soma e a média dos valores lidos.*/
#include <stdio.h>

int main(){
    int valores;

    do{
        printf("Digite o valor: \n");
        scanf("%d%*c", &valores);
    }while(valores!=-99);

    return 0;
}
