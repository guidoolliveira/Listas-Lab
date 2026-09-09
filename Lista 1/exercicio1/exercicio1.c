#include <stdio.h>
#include <stdlib.h>




int main()
{
  
    int idade;
    int credencial;

    printf("Digite a sua idade: ");
    scanf("%d", &idade);

    printf("----------------------------------------\n");
    printf("Digite (1) se voce possuir credencial\n");
    printf("Digite (0) se voce nao possuir credencial\n");
    printf("----------------------------------------\n");
    scanf("%d", &credencial);

    (idade >= 18 || credencial == 1) ? printf("Concedido") : printf("Negado");

    return 0;


}
