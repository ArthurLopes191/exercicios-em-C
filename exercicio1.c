/*Ler um número do teclado e imprimir todos os números de 1 até o número lido. Imprimir a soma dos números.
*/
#include <stdio.h>

int main(){
    int contador, n, soma=0;

    printf("Informe um numero para fazer a contagem de 1 ate ele e por ultimo a soma: \n");
    scanf("%d%*c", &n);

    if(n > 1){
        for(contador=1; contador <= n; contador++){
            printf("%d \n", contador);
            soma = soma+contador;
        }
        printf("A sma de todos os valores eh: %d\n", soma);
    }
    else{
        printf("Insira um numero maior que zero!");
    }

    return 0;
}