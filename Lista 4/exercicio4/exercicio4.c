#include <stdio.h>
#include <stdlib.h>

int eh_triangulo_valido(float a, float b, float c)
{

    if (a < b + c && b < a + c && c < a + b)
    {
        return 0;
    }
    else
    {

        return 1;
    }
}

void classificar_triangulo(float a, float b, float c)
{

    if (a == b && a == c)
    {
        printf("equilatero");
    }
    else if (a != b && b != c && a != c)
    {
        printf("escaleno");
    }
    else
    {
        printf("isosceles");
    }
}

int main()
{
    float a;
    float b;
    float c;

    printf("Digite os lado do triangulo: \n");
    printf("Lado 1: ");
    scanf("%f", &a);

    printf("Lado 2: ");
    scanf("%f", &b);

    printf("Lado 3: ");
    scanf("%f", &c);

    if (eh_triangulo_valido(a, b, c) == 0)
    {
        printf("O triangulo eh: ");
        classificar_triangulo(a, b, c);
    }
    else
    {
        printf("Esse triangulo nao pode ser formado!");
    }

    return 0;
}