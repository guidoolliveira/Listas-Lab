#include <stdio.h>
#include <stdlib.h>

unsigned char comando;
int emergencia;
int rotacao;
int bomba;


int main()
{
   
    printf("Digite o comando desejado em forma de hexadecimal (Ex: 0xB5); ");
    scanf(" %hhx", &comando);
    //hhx le um numero hexadecimal

    emergencia = (comando & 0x80) >> 7;
    rotacao = (comando & 0x38) >> 3;
    bomba = comando & 0x01;

    if (emergencia == 1) {
        printf("Parada de emergencia: Ativo\n");
    } else {
        printf("Parada de emergencia: Inativo\n");
    }

    printf("Velocidade de rotacao do motor: %d\n", rotacao);

       if (bomba == 1) {
        printf("Bomba de resfriamento: Ligada\n");
    } else {
        printf("Bomba de resfriamento: Desligada\n");
    }

    return 0;

}
