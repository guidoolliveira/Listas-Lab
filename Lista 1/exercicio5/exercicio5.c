#include <stdio.h>
#include <stdlib.h>

int temperatura;
int bateria;
unsigned char resultado;

int main()
{

    printf("Digite a temperatura (0 a 15): ");
    scanf("%d", &temperatura);

    printf("Digite o status da bateria (0 a 15): ");
    scanf("%d", &bateria);

    resultado = (temperatura << 4) | bateria;

    printf("Valor decimal: %u\n", resultado);
    printf("Valor hexadecimal: %X\n", resultado);

    return 0;
   
}
