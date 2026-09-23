#include <stdio.h>
#include <stdlib.h>

int calcular_potencial(int base, int expoente)
{
    int potencia = base;

    if (expoente == 0)
    {
        return 1;
    }

    for (int i = 1; i < expoente; i++)
    {
        potencia = potencia * base;
    }

    return potencia;
}

int main()
{
    int base;
    int expoente;

    printf("Digite o valor da base: ");
    scanf("%d", &base);

    printf("Digite o valor do expoente: ");
    scanf("%d", &expoente);

    printf("O valor da potencia eh: %d", calcular_potencial(base, expoente));

    return 0;
}