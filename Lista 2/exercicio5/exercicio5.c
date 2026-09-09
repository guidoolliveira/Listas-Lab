#include <stdio.h>
#include <stdlib.h>

//Exercicio 5

int idade;

int main()
{
    printf("Digite a sua idade: ");
    scanf("%d", &idade);


    if (idade < 5){

        printf("Voce nao possui idade minima necessaria");

    } else if (idade <=7){

        printf("Voce esta na Categoria Infantil A");

    } else if (idade <= 10){
        printf("Voce esta na Categoria Infantil B");
    } else if (idade <= 13){
        printf("Voce esta na Categoria Juvenil A");
    } else if(idade <= 17){
        printf("Voce esta na Categoria Juvenil B");
    } else{
        printf("Voce esta na Categoria Senior");
    }

    return 0;
}
