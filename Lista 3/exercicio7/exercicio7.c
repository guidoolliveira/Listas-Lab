#include <stdio.h>
#include <stdlib.h>

float temperatura;
int temp_segura = 0;

int main()
{

    while(1){
        printf("Digite a temperatura da caldeira: ");
        scanf("%f", &temperatura);

        if (temperatura >= 100){
            printf("PARADA DE EMERGENCIA\n");
            break;
        }

        if (temperatura<=80){
            temp_segura++;

            if (temp_segura==5){
                printf("Estado da Caldeira Estabilizado\n");
                break;
            }
        } else{

            temp_segura = 0;
        }
    }

    return 0;
}
