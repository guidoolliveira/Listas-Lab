#include <stdio.h>
#include <stdlib.h>

//Exercicio 1

int n1;
int n2;

int main()
{
    printf("Digite o primeiro numero: ");
    scanf("%d",&n1);

    printf("Digite o segundo numero: ");
    scanf("%d",&n2);

    if (n1 == n2){
        printf("Os numeros sao iguais");
    } else if (n1 > n2){
        printf("O valor de n1: %d eh maior que o valor de n2: %d", n1,n2);
    } else{
        printf("O valor de n2: %d eh maior que o valor de n1: %d", n2,n1);
    }

    return 0;
}
