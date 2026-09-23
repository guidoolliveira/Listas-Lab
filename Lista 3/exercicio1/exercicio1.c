#include <stdio.h>
#include <stdlib.h>


int tabuada;
int comeco;
int final;
int multi = 0;

int main()
{

    printf("Digite qual tabuada de qual numero voce deseja: ");
    scanf("%d", &tabuada);

    printf("Digite o começo da tabuada: ");
    scanf("%d", &comeco);

    printf("Digite o final da tabuada: ");
    scanf("%d", &final);

    if (comeco >= final)
    {
        printf("Os valores sao invalidos! O começo tem que ser menor do que o final");
    }
    else
    {

        for (int i = comeco; i <= final; i++)
        {

            multi = tabuada * i;
            printf("O valor de %d vezes %d eh: %d \n", tabuada, i, multi);
        }
    }

    return 0;
}
