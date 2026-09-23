#include <stdio.h>
#include <stdlib.h>

int idade = 1;
float tempo;
float menor;
int primeiro = 1;
float maior;
float media = 0;
int idade_30 = 0;
float soma_tempo = 0;

int main()
{

    while (idade != 0)
    {
        printf("Digite a sua idade (DIGITE 0 PARA SAIR DO PROGRAMA): ");
        scanf("%d", &idade);

        if(idade == 0){
            break;
        }

        printf("Digite o tempo da corrida: ");
        scanf("%f", &tempo);

        if (primeiro == 1)
        {
            menor = tempo;
            maior = tempo;
            primeiro = 0;
        }
        else
        {
            if (tempo < menor)
            {
                menor = tempo;
            }
            else
            {
                if (tempo > maior)
                {
                    maior = tempo;
                }
            }
        }

        if (idade > 30){
            idade_30 = idade_30 + 1;
            soma_tempo = soma_tempo + tempo;
        }

    }

    media = soma_tempo/idade_30;

    printf("A menor tempo foi: %f\n", menor);
    printf("A maior tempo foi: %f\n", maior);
    printf("A média de tempo foi: %f", media);
    
    return 0;
}
