#include <stdio.h>
#include <stdlib.h>

void exibir_menu()
{
     printf("1) Consultar Saldo\n");
     printf("2) Deposito\n");
     printf("3) Saque\n");
     printf("4) Sair\n");

     printf("Escolha uma opcao: ");
}

float realizar_deposito(float saldo_atual, float valor)
{

     saldo_atual = saldo_atual + valor;

     return saldo_atual;
}

float realizar_saque(float saldo_atual, float valor)
{

     if (valor <= saldo_atual)
     {

          saldo_atual = saldo_atual - valor;
     }
     else
     {
          printf("Saldo Insuficiente!");
     }

     return saldo_atual;
}

int main()
{

     float saldo;
     float valor;
     int opcao;

     while (opcao != 4)
     {

          exibir_menu();
          scanf("%d", &opcao);

          if (opcao == 1)
          {
               printf("Saldo atual: R$ %.2f\n", saldo);
          }
          else if (opcao == 2)
          {
               printf("Digite o valor do deposito: ");
               scanf("%f", &valor);

               saldo = realizar_deposito(saldo, valor);
          }
          else if (opcao == 3)
          {
               printf("Digite o valor do saque: ");
               scanf("%f", &valor);

               saldo = realizar_saque(saldo, valor);
          }
          else if (opcao == 4)
          {
               printf("Saindo...\n");
          }
          else
          {
               printf("Opcao Inválida! \n");
          }
     }

     return 0;
}