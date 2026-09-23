#include <stdio.h>
#include <stdlib.h>

int n;
float soma = 0;

int main()
{
    printf("Digite um numero: ");
    scanf("%d", &n);
    int fatorial = n;

    for (int i = n - 1; i >= 1; i--)
    {

        fatorial = fatorial * i;
    }

    printf("Fatorial: %d \n", fatorial);

    fatorial = 1;

    for (int i = 1; i <= n; i++)
    {

        fatorial = fatorial * i;
        soma = soma + (1.0 / fatorial);
        
    }

    printf("Soma: %f", soma);

    return 0;
}
