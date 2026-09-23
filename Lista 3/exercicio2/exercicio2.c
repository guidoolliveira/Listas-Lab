#include <stdio.h>
#include <stdlib.h>

float nota = 0;
int notas_validas = 0;
float media;
float total_notas;
float maior_nota;

int main()
{

    while (nota != -1)
    {

        printf("Digite uma nota - (Digite -1 para encerrar o programa): ");
        scanf("%f", &nota);

        if (nota >= 0 && nota <= 10)
        {

            notas_validas = notas_validas + 1;
            total_notas = total_notas + nota;

            if (nota > maior_nota)
            {

                maior_nota = nota;
            }
        }
        else
        {

            continue;
        }
    }

    if (notas_validas == 0)
    {
        printf("Insira pelo menos uma nota valida");
    }
    else
    {
        media = total_notas / notas_validas;
        printf("A media da turma eh: %f\n", media);
        printf("A maior nota eh: %f\n", maior_nota);
        printf("O numero de notas validas foram: %d\n", notas_validas);
    }
    
    return 0;
}


