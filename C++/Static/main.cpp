#include <iostream>

extern int s_Variable; // Com a keyword extern, o linker irá procurar por essa mesma variável em outro Object File.

// void Function(void) {



// }

extern void Function(void);

int main(void) {

    printf("%d\n", s_Variable);

    int teste = 121;

    printf("%d\n", teste);

    return 0;
}