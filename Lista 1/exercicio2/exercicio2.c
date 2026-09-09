#include <stdio.h>
#include <stdlib.h>


int brilho;
int novo_brilho;
char operacao;

int main()
{

    printf("Digite o brilho inicial do seu celular (0 a 100): ");
    scanf("%d", &brilho);

    printf("----------------------------------\n");
    printf("1) Digite (+) para aplicar o pre-incremento\n");
    printf("2) Digite (-) para aplicar o pre-decremento\n");
    printf("3) Digite (*) para aplicar o pos-incremento\n");
    printf("----------------------------------\n");

    scanf(" %c", &operacao);

    switch (operacao){

        case '+':

            novo_brilho = ++brilho;
            printf("O brilho atual eh: %d", novo_brilho);
            break;

        case '-':
            novo_brilho = --brilho;
            printf("O brilho atual eh: %d", novo_brilho);
            break;
        
        case '*':
            novo_brilho = brilho++;
            printf("O brilho atual eh: %d \n", novo_brilho);
            printf("O novo brilho eh: %d", brilho);
            break;
        
        default:
            printf("Operacoes nao validas");
    }
    
    return 0;


}
