// Funções com passagem de argumentos por referência

/* Outra maneira de realizar a passagem de argumentos para uma função qualquer é denominada de passagem por referência. Nesse tipo, utiliza-se o endereço da 
variável para passá-lo a função.

As manipulações/ alterações efetuadas nos parâmetros dentro das funções afetam diretamente as variáveis usadas nas chamadas. 

Relembrando: Uma função que não retorna valor colocar void como tipo da função para indicar isso. A função não pode conter o comando return. */

#include <stdio.h>

void loop_count(int *ptr) { // Void não irá retornar nada

    printf("Na função loop_count o valor de i = %d\n", *ptr);

    while(*ptr < 10) {

        printf("%d\n", (*ptr)++); // i = 2, 3, 4, 5, 6, 7, 8, 9

    }

}

int main(void) {

    int i = 2;

    printf("Na main antes da chamada da função loop_count, i = %d\n", i);

    loop_count(&i);

    printf("Na main depois da chamada da função loop_count, i = %d\n", i); // --> A variável i foi modificada na função i

    return 0;
}