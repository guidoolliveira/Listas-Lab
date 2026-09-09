#include <stdio.h>
#include <stdlib.h>


int main()
{
    int n;

    printf("Digite um numero: ");
    scanf("%d", &n);

    if(n & 1){

        printf("O numero %d eh impar", n);

    } else{

        printf("O numero %d eh par", n);

    }

    return 0;
}
