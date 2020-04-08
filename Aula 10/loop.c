#include <stdio.h>
#include <stdbool.h> // <- Para poder utilizar o true

int main(void) {

    // unsigned int i = 0; // Normalmente os contadores começam em 0. E são do tipo unsigned. 

    unsigned int c = 3;

    unsigned int l = 5;
 
/*

imprimir:

    printf("O valor da variável i (unsigned int) é: %u\n", i);

    i++;

    if (i < 3)
        goto imprimir; // <- Vá para a Label imprimir

    */

    /*

    printf("O valor da variável i (unsigned int) depois do incremento é: %u\n", i);

    i+=1;

    printf("O valor da variável i (unsigned int) depois do incremento é: %u\n", i);

    ++i;
 
    */

    for(unsigned i = 0; i < 3 ; i++ ) // i = 0 é a mesma coisa que dar uma valor a variável i que está na linha 5. No caso do unsigned ele tem um int implicito 
        {
        printf("O valor da variável i (unsigned int) é: %u\n", i);

    }

    while(c < 5) {

        printf("O valor da variável c (unsigned int) é: %u\n", c++);
    }

    do

        printf("O valor da variável l (unsigned int) é: %u\n", l++);

    while(l < 7);

    return 0;

}