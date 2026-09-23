#include <stdio.h>
#include <stdlib.h>

int eh_primo(int n)
{

    for (int i = 2; i * i <= n; i++)
    {

        if (n % i == 0)
        {

            return 0;
        }
        else
        {

            return 1;
        }
    }
}

int main()
{
    int n;
    printf("Digite um numero: ");
    scanf("%d", &n);

    if (eh_primo(n) == 1)
    {
        printf("O numero %d eh primo", n);
    }
    else
    {
        printf("O numero %d nao eh primo", n);
    }

    return 0;
}