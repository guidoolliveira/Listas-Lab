#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Exercicio 7

float salario;
int dependentes;
float abatimento;
float salario_total;
float imposto;
float salario_base;

int main()
{
  
    printf("Digite o seu salario: ");
    scanf("%f", &salario);

    printf("Digite o numero de dependentes: ");
    scanf("%d", &dependentes);

    abatimento = dependentes * 189.59;
    salario_base = salario - abatimento;


    if (abatimento > salario){

         salario_base = 0;
         printf("Seu salario base eh: %.2f \n",  salario_base);

    } else if( salario_base <= 2259.20){

        imposto = 0;


        printf("------------------Salario------------------\n");
        printf("--------------------------------\n");
        printf("Seu salario base eh: %.2f \n",  salario_base);
        printf("--------------------------------\n");
        printf("A Aliquota aplicada foi de 0%% \n");
        printf("--------------------------------\n");
        printf("O imposto aplicado sobre o salario foi de: %.2f \n",  imposto);
        printf("--------------------------------\n");
        salario_total = salario - imposto;
        printf("Seu salario total eh: %.2f \n",  salario_total);


    } else if ( salario_base <= 2826.65){

        imposto = ( salario_base * 0.075) - 169.44;
         printf("------------------Salario------------------\n");
        printf("--------------------------------\n");
        printf("Seu salario base eh: %.2f \n",  salario_base);
        printf("--------------------------------\n");
        printf("A Aliquota aplicada foi de 7,5%% \n");
        printf("--------------------------------\n");
        printf("O imposto aplicado sobre o salario foi de: %.2f \n",  imposto);
        printf("--------------------------------\n");
        salario_total = salario - imposto;
        printf("Seu salario total eh: %.2f \n",  salario_total);


    } else if( salario_base <= 3751.05){

        imposto = ( salario_base * 0.15) - 381.44;
         printf("------------------Salario------------------\n");
        printf("--------------------------------\n");
        printf("Seu salario base eh: %.2f \n",  salario_base);
        printf("--------------------------------\n");
        printf("A Aliquota aplicada foi de 15%% \n");
        printf("--------------------------------\n");
        printf("O imposto aplicado sobre o salario foi de: %.2f \n",  imposto);
        printf("--------------------------------\n");
        salario_total = salario - imposto;
        printf("Seu salario total eh: %.2f \n",  salario_total);


    } else if ( salario_base <= 4664.68){

        imposto = ( salario_base * 0.225) - 662.77;
        printf("------------------Salario------------------\n");
        printf("--------------------------------\n");
        printf("Seu salario base eh: %.2f \n",  salario_base);
        printf("--------------------------------\n");
        printf("A Aliquota aplicada foi de 22,5%% \n");
        printf("--------------------------------\n");
        printf("O imposto aplicado sobre o salario foi de: %.2f \n",  imposto);
        printf("--------------------------------\n");
        salario_total = salario - imposto;
        printf("Seu salario total eh: %.2f \n",  salario_total);


    } else{

        imposto = ( salario_base * 0.275) - 896.00;
         printf("------------------Salario------------------\n");
        printf("--------------------------------\n");
        printf("Seu salario base eh: %.2f \n",  salario_base);
        printf("--------------------------------\n");
        printf("A Aliquota aplicada foi de 27,5%% \n");
        printf("--------------------------------\n");
        printf("O imposto aplicado sobre o salario foi de: %.2f \n",  imposto);
        printf("--------------------------------\n");
        salario_total = salario - imposto;
        printf("Seu salario total eh: %.2f \n",  salario_total);


    }

    return 0;

}
