#include <stdio.h>
#include <stdlib.h>

//Exercicio 6

float lado1;
float lado2;
float lado3;

int main()
{
    printf("Digite o valor do lado 1: ");
    scanf("%f", &lado1);

    printf("Digite o valor do lado 2: ");
    scanf("%f", &lado2);

    printf("Digite o valor do lado 3: ");
    scanf("%f", &lado3);

    if(lado1 < lado2 + lado3 && lado2 < lado1 + lado3 && lado3 < lado1 + lado2){

        if(lado1 != lado2 && lado1 != lado3 && lado2 != lado3){

            printf("O triangulo eh escaleno");
        } else if (lado1 == lado2 && lado2 == lado3){
            printf("O triangulo eh equilatero");
        } else {
            printf("O triangulo eh isosceles");
        }
    } else{
        printf("O triangulo é invalido");
    }

    return 0;
}
