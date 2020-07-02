#include <stdio.h>
// extern int i; // extern quer dizer que eu irei utilizar essa variável que está inicializada em outro lugar. Pode ser um outro arquivo, por exemplo.

// void inc_i(void) {

// i++;

// }

// static funcao(void) { // Declarando essa função como static, ela será somente acessível nesse programa, nesse .c
//                      // Não será possível acessar ela de outro arquivo.


// }

extern int an; 

int main(void){

 
    int an;

    int i;

    i = 12;

    an = 10; 

    printf("%d\n", an);

    return 0;
}