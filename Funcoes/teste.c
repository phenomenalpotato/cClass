#include <stdio.h>

#define TESTE printf("--------------------------------------------------------------------------------\n");

#define FPRINT fprintf(stderr, "Onde estou?!\n");

int main(int argc, char *argv[]) {

    int funcByValue(int x);

    int a = 233;

    printf("Valor da variável (a) na função Main(): %d\n", a);

    a = funcByValue(a);

    printf("Valor da variável (a) no retorno da função funcByValue: %d\n", a);

    // printf("--------------------------------------------\n");

    TESTE

    int funcByReference(int *ptr);

    int b;

    funcByReference(&b);

    printf("Valor da variável (b) ao modificar usando um ponteiro na função funcByReference: %d\n", b);

    FPRINT

    return 0;
}

int funcByValue(int x) {

    x = 12;

    return x;
}

int funcByReference(int *ptr) {

    *ptr = 100;
    
}