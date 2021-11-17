/*
Faça um programa com a seguinte tela:

    Menu de opções:
    1 - Ordenar
    2 - Substituição
    3 - Encerrar
    Escolha uma opção

Opção 1: ler uma palavra (de no máximo 50 caracteres), o programa deverá  e apresentar a palavra com as letras
ordenadas em ordem alfabética. Por exemplo, para a String RAMON LUMMERTZ, o resultado será: AELMMMNORRTZ
Opção 2: faz a leitura de um texto livre (de no máximo 50 caracteres) e substitui escrevendo todos os espaços
em branco do texto livre por underline( _ ), além disso, deverá inverter a ordem do texto. Por exemplo, para a
string "O TRABALHO E FACIL", será: LICAF_E_OHLABART_O
*/
#include <stdio.h>
#include <string.h>


int main(){
    
    int menu;
    int i, y;
    char string[51];
    char pos;
    
    do{
    printf("\n\nSelecione uma das opcoes: \n");
    printf("1 - ORDENAR (*Faz a leitura de uma palavra (de no maximo 50 caracteres), e apresenta a palavra com as letras ordenadas em ordem alfabetica.) \n");
    printf("2 - SUBSTITUIR (*Faz a leitura de um texto livre (de no maximo 50 caracteres) e substitui escrevendo todos os espacos em branco do texto livre por underline( _ ), alem disso, inverte a ordem do texto.)\n");
    printf("3 - ENCERRAR \n");
    scanf("%d%*c", &menu);
       
        switch (menu)
        {
        case 1:

            printf("Informe uma palavra(max 50 caracteres): \n");
            gets(string);
            fflush(stdin);
        
                for(i = 0; i<= strlen(string); i++){
                    for(y = i + 1; y <= strlen(string); y++){
                        if(string[i] > string[y] && string[y] != '\0'){
                            pos = string[i];
                            string[i] = string[y];
                            string[y] = pos;
                        }
                    }
                }
                printf("A palavra ordenada eh: %s", string);
            break;

        case 2:
                printf("Entre com uma palavra ou frase (max 50 caracteres): \n");
                gets(string);
                fflush(stdin);

                for (i=strlen(string)-1; i>=0; i--){
                    if(string[i]!=' '){
                        printf("%c", string[i]);
                    }
                    else{printf("_");
                    }
                } 
                
                printf(" \n");

            break;

        case 3:
            
            return(0);
            break;

        default:
            
            printf("\n ERRO!!! Opcao invalida \n");
        
        break;
        }

        }while (menu != 3);
        
    
    return 0;
}