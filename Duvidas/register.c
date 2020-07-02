// A keyword regiter em C:

// Regiters são mais rápidos do que memórias para serem acessados, por isso as variáveis que são mais frequentemente usadas em um programa em C podem ser
// colocadas em regitradores usando a keyword register. A keyword register da dicas para o compilador que uma certa variável pode ser colocada em um registrador.
// É da escolha do compilador se ele colocará no registrador ou não. Geralmente, os próprios compiladores fazem otimizações e colocam variáveis em registrador.

// 1) Se você usar o operador & com uma register variável, então o compilador pode dar um erro ou warning (Dependendo do compilador que você está usando)
// Pq quando nós dizemos que uma variável é um registrador, pode ser que ela seja armazenada em um registrador ao invés da memória e acessar um 
// endereço de registrador é inválido. Por exemplo:

#include <stdio.h>

int main(void) {

    register int i = 10;
    int * p = &i;
    printf("%d\n", *p);
    return 0;
}

// 2) register keyword pode ser usada com pointer variables. Obviamente, um registrador pode ter um endereço de uma memória alocada. Não teria nenhum
// problema. Por exemplo, nesse caso, o ponteiro está em um registrador. E nesse registrador tem um endereço de memória:

#include <stdio.h>

int main(void) {

    int i = 10;
    register int * p = &i;
    printf("%d\n", *p);

    return 0;
}

// 3) Register é uma classe de armazenamento, e C não permite múltiplos specifiers de classe de armazenamento para uma variável. Então, register
// não pode ser usada com static. Por exemplo: 

#include <stdio.h>

int main(void) {

    int i = 10;
    register static int * p = &i;
    printf("%d\n", *p);

    return 0;
}

// 4) Register pode somente ser usado dentro de um bloco (local), não pode ser usado em um escopo global (fora da main).

#include <stdio.h>

// Error (global scope)
register int x = 10;

int main(void) {

    // Funciona (dentro de um bloco)
    register int i = 10;
    printf("%d\n", x);
    printf("%d\n", i);

    return 0;
}

// 5) Não há limite para os números de variáveis register em um programa em C, mas o ponto é que o compilador pode ou não colocar algumas variáveis
// no registrador.