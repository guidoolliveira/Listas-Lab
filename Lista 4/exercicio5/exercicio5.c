#include <stdio.h>
#include <stdlib.h>
float media;

float calcular_media_ponderada(float n1, float n2, float n3, int p1, int p2, int p3)
{

    media = ((n1 * p1) + (n2 * p2) + (n3 * p3)) / (p1 + p2 + p3);
    return media;
}

void exibir_situacao(float media)
{
    if (media >= 7)
    {
        printf("Aprovado!");
    }
    else if (media >= 3)
    {
        printf("Em recuperação");
    }
    else
    {
        printf("Reprovado :<");
    }
}

int main()
{

    float n1;
    float n2;
    float n3;
    int p1;
    int p2;
    int p3;

    printf("Digite a nota 1: ");
    scanf("%f", &n1);
    printf("Digite o peso da nota 1: ");
    scanf("%d", &p1);

    printf("Digite a nota 2: ");
    scanf("%f", &n2);
    printf("Digite o peso da nota 2: ");
    scanf("%d", &p2);

    printf("Digite a nota 3: ");
    scanf("%2f", &n3);
    printf("Digite o peso da nota 3: ");
    scanf("%d", &p3);

    printf("Sua media eh: %.2f \n", calcular_media_ponderada(n1, n2, n3, p1, p2, p3));
    exibir_situacao(calcular_media_ponderada(n1, n2, n3, p1, p2, p3));

    return 0;
}