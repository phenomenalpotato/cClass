#include <stdio.h>

void imprime(char *s) {

    while (*s != '\0')


        putchar(*s++);

}

int main(void) {

    // int a[] = {2017, 2018, 2019};

    // for (int i = 0; i < 3; ++i) {

    //     printf("Valor do Array atualmente: %d\n", a[i]);
    // }

    // printf("O último elemento de a é: %d\n", *(a + 2));

    // printf("O endereço de memória de a é: %p\n", a);

    // int i = 2017;

    // int *ponteiro;

    // ponteiro = &i;

    // printf("O endereço da variavel i em memória é: %p\n", &i);

    // printf("O valor da variável i usando ponteiro é: %d\n", *ponteiro);

    // char c[] = "Texto"; 

    // char *s = "Texto";

    // puts(a);

    // int a[2];

    // a[0] = 2017;

    // a[1] = 2019;

    // printf("a[0] = %d \na[1] = %d \n", *a, *(a + 1));

    char s[] = "fernando";

    char *t = "fernando"; // Uma String em C

    char u[] = {0x66, 0x65, 0x72, 0x6e, 0x61, 0x6e, 0x64, 0x6f, '\n',0x00}; // Array de bytes terminado em Nulo

    imprime(u); 

    return 0;
}