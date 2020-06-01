#include <stdio.h>

int main(void) { 

int a[5] = {1,7,3,4,5};

// int i = 12;

// int *pointer = &i;

// int *p = a; // Estou passando o endereço do primeiro elemento do Array a para o ponteiro.

// printf("%d\n", i);

// printf("%d\n", *p);

// *pointer = 10;

// printf("%d\n", i);

// int (*p)[5]; // Nesse caso (*p) está apontando para todo o Array de 5 elementos, não somente um. 

// printf("%d\n", *(a+1) );

int i = 10;

int *p = &i;

printf("Endereço de i: %p\n", &i);

printf("conteudo de p: %p\n", p); // Nesse caso, como o conteúdo de um ponteiro é um endereõ de memória tem que usar o formater %p para ver o conteúdo
                                 // certo dentro dele

return 0;

}