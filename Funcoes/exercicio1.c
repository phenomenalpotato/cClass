/* Faça um programa para calcular a soma dos n primeiros números dados pelo o usuário na entrada. Criar duas funções soma (uma recursiva e outra não) que recebe 
como parâmetro de entrada o número lido. */

#include <stdio.h>

int somanaorec(int num) {

    int i, cont, numanterior, numtotal;

    cont = num;
    numanterior = num;

    for(i = 0; i < cont; i++) {

        numanterior = numanterior - 1;

        numtotal = numtotal + numanterior;

    }

    return numtotal;

}

int somarec(int num) {

    if(num == 1) {

        return 1;

    }

    else {

        return num + somarec(num - 1);
    }   
}

int main(void) {

    int numero;

    printf("Digite um número: ");
    scanf("%d", &numero);

    printf("Essa é a soma dos números anteriores sem usar recursão: %d\n", somanaorec(numero) + numero);

    printf("Essa é a soma dos números anteriores usando recursão: %d\n", somarec(numero));

    return 0;
}