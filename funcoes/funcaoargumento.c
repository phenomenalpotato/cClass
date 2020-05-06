#include <stdio.h>

int x = 30;

void separacao(void) {

    puts("---------------------------------------------");

    printf("Valor de x na função separacao: %d\n", x);

    printf("separacao %p\n", &x);
}

int main(void) {

    void funcaoPrint(int x, int vetor[]);

    x = x + 10;

    int vetor[3] = {2, 10}; // vetor == array

    funcaoPrint(x, vetor);

    separacao();

    printf("Variável x na função main = %d\n", x);

    // printf("Vetor na função main = %d\n", vetor[1]);

    printf("main %p\n", &x);

    // separacao();

    return 0;

}

void funcaoPrint(int x, int vetor[]) {


    x = x + 10;

    vetor[1] = 20;

    separacao();

    printf("funcaoPrint %p\n", &x);

    printf("Variável x na função funcaoPrint = %i\n", x);

    // printf("Variável na função funcaoPrint = %i\n", vetor[1]);

}

