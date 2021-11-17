/*Escrever um programa que receba vários números inteiros no teclado e no final imprimir a média dos números múltiplos de 3. Para sair digitar 0(zero). */
#include <stdio.h>

int main(){
    int numeros;
    int soma=0;
    float media;
    int cont=0;

    do
    {   
        printf("Digite o valor: \n");
        scanf("%d%*c", &numeros);
        if(numeros%3==0){
            cont++;
            soma=soma+numeros;
        }
    } while (numeros !=0);
        media=soma/cont;
        printf("Valor da media dos multpilos de 3 eh: %.2f \n", media);
    return 0;
}