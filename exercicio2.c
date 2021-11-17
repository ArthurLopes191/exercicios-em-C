/*Solicitar a idade de 5 pessoas e imprimir a média de idade lidas.
*/
#include <stdio.h>

int main(){
    int i, idade;
    float media, soma = 0;

    for(i=0; i < 5; i++){
        printf("Informe a idade da pessoa %i: \n", i+1);
        scanf("%d%*c", &idade);
        soma = soma + idade;
        }

        media = soma / 5;
        printf("Idade media: %.2f \n", media);
   
    

    return 0;
}