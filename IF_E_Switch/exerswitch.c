#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(void) {

    int opcao;
    float op1;
    float op2;
    float resul;

    printf("Escolha uma das opções a seguir para fazer uma Operação Aritmética: 1 - Soma;  2 - Subtração; 3 - Multiplicação; 4 - Divisão; 5 - Exponenciação: ");
    scanf("%d", &opcao);

    if (opcao >= 6) {
        printf("Error: Selecione uma opção entre 1 e 5\n");
        exit(1);
    }

    printf("Qual é o primeiro operando: ");
    scanf("%e", &op1);

    printf("Qual é o segundo operando: ");
    scanf("%e", &op2);

    switch(opcao){  

        case 1: 
            resul = op1 + op2; 

            printf("O resultado da soma é: %.2f\n", resul);
        break;

        case 2:
            resul = op1 - op2;
            
            printf("O resultado da subtração é: %.2f\n", resul);
        break;

        case  3:
            resul = op1 * op2;

            printf("O resultado da subtração é: %.2f\n", resul);
        break;

        case 4:
            if(op2 != 0){
            
            resul = op1 / op2;

            printf("O resultado da divisão é: %.2f\n", resul);

        }
        break;

        case 5:
            resul = pow(op1, op2);

            printf("O resultado da exponenciação é: %.2f\n", resul);
        break;

        // default: 
        //     printf("Error: Selecione uma opção entre 1 e 5\n");

    }

    return 0;
}