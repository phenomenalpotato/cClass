#include <stdio.h>

/* Para podermos usar o tipo e variável bool: */

#include <stdbool.h>

int main(void) {

    bool a;

    bool b;

    /* O tipo de variável bool foi introduzido depois. Quando ela não existia as pessoas usavam o char, pois, ela tinha o mesmo tamanho de bool */ 

    char c;

    c = 0; // false

    c = 1; // true

    a = true;

    b = false;

    printf("O tamanho da variável b (bool) = %lu byte\n", sizeof b);

    /* Não existe um operador (%) especifico para o tipo booleano. Vc precisará de um operador, que pode ser o %i */

    printf("O valor de a é %i\n", a);

    printf("O valor de b é %i\n", b);  

    return 0;

}