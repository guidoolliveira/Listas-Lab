#include <stdio.h>
#include <stdlib.h>
#include<math.h>

//Exercicio 2

float n1;
float resultado;


int main()
{
    printf("Digite um numero: ");
    scanf("%f",&n1);

    if (n1 >= 0){

        resultado = sqrt(n1);


    } else{

        resultado = pow(n1,2);

    }

   printf("O valor de n1 eh: %f ", resultado);

   return 0;

}
