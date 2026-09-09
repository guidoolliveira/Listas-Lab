#include <stdio.h>
#include <stdlib.h>

//Exercicio 3

int opcao;

int main()
{
    printf("---------------------------------- \n");
    printf("1) Prato Principal - 13 reais \n");
    printf("2) Vegetariano - 12 reais \n");
    printf("3) Salada Especial - 8 reais \n");
    printf("4) Sobremesa Especial - 4 reais \n");
    printf("5) Suco Natural - 3 reais \n");
    printf("---------------------------------- \n");

    printf("Digite a opcao:\n ");
    scanf("%d",&opcao);

    switch (opcao){
        case 1:
             printf("Prato Escolhido: 1) Prato Principal - 13 reais ");
             break;
        case 2:
             printf("Prato Escolhido: 2) Vegetariano - 12 reais ");
             break;
        case 3:
             printf("Prato Escolhido: 3) Salada Especial - 8 reais ");
             break;
        case 4:
             printf("Prato Escolhido: 4) Sobremesa Especial - 4 reais ");
             break;
        case 5:
             printf("Prato Escolhido: 5) Suco Natural - 3 reais ");
             break;
    default:
        printf("Opcao Invalida ");
    }

    return 0;
}
