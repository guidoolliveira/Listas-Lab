#include <stdio.h>
#include <stdlib.h>

long long fatorial(int n)
{
    long long resultado = 1;

    for (int i = 1; i <= n; i++)
    {
        resultado = resultado * i;
    }

    return resultado;
}

long long combinacao(int n, int k)
{
    long long resultado;

    resultado = fatorial(n) / (fatorial(k) * fatorial(n - k));

    return resultado;
}

int main()
{

    int n;
    int k;

    printf("Digite o valor de n: ");
    scanf("%d", &n);

    printf("Digite o valor de n: ");
    scanf("%d", &k);

    while (n < k)
    {
        printf("N deve ser maior ou igual a K, digite novamente!");

        printf("Digite o valor de n: ");
        scanf("%d", &n);

        printf("Digite o valor de n: ");
        scanf("%d", &k);
    }

    printf("Numero de combinações %d", combinacao(n, k));

    return 0;
}