#include <stdio.h>
#include <stdlib.h>

//Exercicio 4

float n1;
float n2;
float resultado;
char operacao;

int main()
{

    printf("Digite o valor do n1: ");
    scanf("%f",&n1);

    printf("Digite o valor do n2: ");
    scanf("%f",&n2);

    printf("Listas de operacao: \n");
    printf("1)Digite (+) para Adicao: \n");
    printf("2)Digite (-) para Subtracao \n");
    printf("3)Digite (*) para Multiplicacao: \n");
    printf("4)Digite (/) para Divisao: \n");

    printf("Digite a operacao desejada: ");
    scanf(" %c",&operacao);


        switch(operacao){

            case '+':
             resultado = n1 + n2;
             printf("Resultado da Soma: %f ", resultado);
             break;
        case '-':
             resultado = n1 - n2;
             printf("Resultado da Subtracao: %f ", resultado);
             break;
        case '*':
             resultado = n1 * n2;
             printf("Resultado da Multiplicacao: %f ", resultado);
             break;
        case '/':
              if (n2 == 0){
                printf("Operacao invalida, divisao por 0 ");
            } else{
             resultado = n1 / n2;
             printf("Resultado da Divisao: %f", resultado);
            }

             break;
    default:
        printf("Opcao Invalida ");
        }

    return 0;
}
