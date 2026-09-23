#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char senha[10] = "2026";
char tentativa[10];

int main()
{

    int i = 3;
    while (i >= 1)
    {
        printf("Digite a senha: ");
        scanf("%9s", &tentativa);

        if (strcmp(tentativa, senha) == 0)
        {
            printf("PERMISSAO CONCEDIDA");
            break;
        }
        else
        {
            i--;
            printf("PERMISSAO NEGADA\n Restam %d tentativas\n", i);

            if (i == 0)
            {
                printf("CONTA BLOQUEADA");
            }
        }
    }

    return 0;
}
