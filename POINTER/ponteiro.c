#include <stdio.h>

int main(void) {

    int x = 10;

    int *ponteiro; // int para informar que este ponteiro está apontando para uma variável inteira. E * para informar que é um ponteiro

    // int *p;

    ponteiro = &x; // "Colocando um valor de memória no ponteiro". 
                   // O ponteiro está agora apontando para o endereço na memória da variável x. "Está carregado com o endereço de memória da variável x"

    int y = 20;

    int i = 40;

    // int t = 14;

    *ponteiro = y; // Colocando um valor no espaço de memória que esse ponteiro está apontando.
                   // O ponteiro irá no endereço de memória onde está a variável x e mudará o valor para o valor que está em y

    printf("%d %d\n", x, y);
    
    *ponteiro = i;

    printf("%d %d\n", x, y);

    ponteiro = &y;

    // p = &x;

    *ponteiro = i;

    // *p = t;

    printf("%d %d\n", x, y);


    printf("Tamanho da variável x (int) é: %lu bytes\n", sizeof x);



    return 0;

}

