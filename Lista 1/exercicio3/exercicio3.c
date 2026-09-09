#include <stdio.h>
#include <stdlib.h>


int main()
{

    char letra;
    int chave;
    int cifrado;
    char decifrado;

    printf("Digite um caractere: ");
    scanf(" %c", &letra);

    printf("Digite uma chave (0 a 255): ");
    scanf(" %d", &chave);

    cifrado = letra ^ chave;
    printf("O valor cifrado: %d\n", cifrado);
    printf("O caractere cifrado: %c\n", cifrado);

    decifrado = cifrado ^ chave;
     printf("Caractere decifrado: %c\n", decifrado);

     return 0;
}
