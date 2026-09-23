#include <stdio.h>
#include <stdlib.h>

float celcius_para_fahrenheit(float temperatura)
{
    float fahrenheit;
    fahrenheit = (temperatura * 9 / 5) + 32;

    return fahrenheit;
}

float fahrenheit_para_celcius(float temperatura)
{
    float celcius;
    celcius = (temperatura - 32) * 5 / 9;

    return celcius;
}

int main()
{

    float temperatura;
    int caso;

    printf("1 - Celcius para Fahrenheit: \n");
    printf("2 - Fahrenheit para Celcius: \n");
    printf("Escolha seu modo de conversao: ");
    scanf("%d", &caso);

    printf("Digite a temperatura: ");
    scanf("%f", &temperatura);

    switch (caso)
    {
    case 1:
        printf("A temperatura foi: %f", celcius_para_fahrenheit(temperatura));
        break;

    case 2:
        printf("A temperatura foi: %f", fahrenheit_para_celcius(temperatura));
        break;

    default:
        printf("Informações inválidas");
        break;
    }

    return 0;
}