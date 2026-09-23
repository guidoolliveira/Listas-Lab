#include <stdio.h>
#include <stdlib.h>

float aplicacao_inicial;
float aporte_mensal_fixo;
float taxa_juros;
int anos;
float saldo;
float total;

int main()
{

    printf("Digite o valor da aplicacao inicial: ");
    scanf("%f", &aplicacao_inicial);

    printf("Digite o valor do aporte mensal: ");
    scanf("%f", &aporte_mensal_fixo);

    printf("Digite a taxa de juros mensal (%%): ");
    scanf("%f", &taxa_juros);

    printf("Digite a quantidade de anos: ");
    scanf("%d", &anos);

    saldo = aplicacao_inicial;
    total = aplicacao_inicial;

    for (int i = 1; i <= anos * 12; i++)
    {

        saldo = saldo + aporte_mensal_fixo;
        saldo = saldo + (saldo * taxa_juros / 100);

        total = total + aporte_mensal_fixo;
    }

    printf("O saldo final: %f \n", saldo);
    printf("O total investido: %f ", total);

    return 0;
}
