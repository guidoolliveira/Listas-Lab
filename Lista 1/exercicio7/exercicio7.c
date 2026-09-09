#include <stdio.h>
#include <stdlib.h>

unsigned char estado;

int main()
{

     printf("Digite o comando desejado em forma de hexadecimal (Ex: 0xB5): ");
     scanf(" %hhx", &estado);

    printf("----------Via A----------\n");
    printf("Luz Verde: %s \n", (estado & 0x01) ? "Ligado" : "Desligado" );
    printf("Luz Amarela: %s \n", (estado & 0x02) ? "Ligado" : "Desligado" );
    printf("Luz Vermelha: %s \n", (estado & 0x04) ? "Ligado" : "Desligado" );

     printf("----------Via B----------\n");
    printf("Luz Verde: %s \n", (estado & 0x08) ? "Ligado" : "Desligado" );
    printf("Luz Amarela: %s \n", (estado & 0x10) ? "Ligado" : "Desligado" );
    printf("Luz Vermelha: %s \n", (estado & 0x20) ? "Ligado" : "Desligado" );

     printf("----------Status do Semaforo----------\n");
     printf("%s\n",  ((estado & 0x01) && (estado & 0x08)) || ((estado & 0x07) == 0) || ((estado & 0x38) == 0) ? 
     "Erro Grave" : "Seguro");

     return 0;
}
