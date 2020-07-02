#include <stdio.h>

int main(void) {

    /* Fazendo um Array e reservando 3 espaços/ posições na memoria para ele. O tipo char normalmente tem um byte de tamanho. Agora, esse Array está ocupando 
    3 bytes em memória. */

    unsigned char c[3];

    int i [3];

    /* Pegando o número de elementos dentro de um array */

    printf("O número de elementos de c (char) é: %zu elementos no array\n", sizeof c / sizeof c[0]); // sizeof c / sizeof c[0] <- [0] é o primeiro elemento do array 

    printf("O tamanho do c (char) é: %zu em bytes\n", sizeof c); 

    c[0] = 'A';
    c[1] = 0x42;
    c[2] = 67;
    // c[7] = 68;

    printf("O elemento 0 de c é: %c\n", c [0]);
    printf("O elemento 1 de c é: %c\n", c [1]);
    printf("O elemento 2 de c é: %c\n", c [2]);
    // printf("O elemento 3 de c é cara: %d\n", c [7]);

    printf("O endereço do array c em memória é: %p\n", c); // %p de pointer 
    printf("O endereço do array &c em memória é: %p\n", &c); // & é um operador que irá pegar o endereço de c
    printf("O endereço do primeiro elemento do array c em memória é: %p\n", &c[0]);

    /* Pegando a quantidade de arrays que tem em i */

    printf("O número de elementos de i (int) é: %zu elementos no array\n", sizeof i / sizeof i[1]); // sizeof i[1] <- segundo elemento do array 

    printf("O tamanho da variável i (int) é: %zu bytes\n", sizeof i);

    return 0;

}