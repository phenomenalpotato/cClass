#include <stdio.h>
#include <limits.h> // Para usar os limites UINT_MAX, USHRT_MAX, LONG_MAX
#include <stdint.h> // Para utilizar os uint32_t, uint16_t
#include <stdlib.h> // Para utilizar o size_t

int main(void) {

    /* Iniciando uma variável, dando o número máximo que pode ser colocado dentro de um inteiro com o INT_MAX. No caso dessa variável, o valor que será impresso
    não será o maior valor que essa variável consegue ter, pois, essa variável está como signed. Ou seja, metade do tamanho dela está reservada para números
    positiovos e negativos. */

    int i = INT_MAX;

    /* Iniciando uma variável do tipo int unsigned, e dando para ela o seu valor máximo. */ 

    unsigned int ii = UINT_MAX;

    uint32_t iii = UINT_MAX; // Garantindo que essa variável terá o tamanho de 32 bits

    uint16_t iiii = USHRT_MAX; // Garantindo que a variável tenha o tamanho de 16 bits

    /* Fazendo que a variável do tipo int tenha metade do seu tamanho. É a mesma coisa que fazer uint16_t para definir o tamanho da variável em 16 bits.  */

    short int iiiii;  // Posso fazer também somente, ao invés de short int iiiii; Fazer short iiiii; Que é a mesma coisa, isso pq o short já está implicito nele 
                      // o int, ele só serve para int mesmo  
    long int iiiiii = LONG_MAX; // Também posso fazer somente long iiiiii; Essa variável apartir de agora terá tamanho de 64 bits

    size_t iiiiiii; // Ele é exatamente o tipo de retorno do sizeof. Ele é um tipo unsigned int, e também depende da arquitetura 

    register int iiiiiiii = 0; // Esse register irá dizer, que por preferencia (limitação de hardware e outros) ele vai, ao invés de colocar essa variável em memória
                           // Irá colocar no registrador do Processador. Normalmente, utilizado para contagens e coisas do tipo. 
    register long int iiiiiiiiii = 0; // Essa variável terá tamanho de 64 bits usando o long int 

    // i++; Incrementando a variável i em mais 1. Mesma coisa que fazer i = i + 1 ou fazer a mesma coisa que i += 1 

    /* O %zu é para imprir o valor do operador sizeof de maneira correta, com os valores corretos. */

    printf("O tamanho de i (signed int): %zu bytes / %zu bits\n", sizeof i, sizeof i * 8);

    printf("O valor máximo de i: %i\n", i);

    /* Caso, nós usemos o %d ou %i que são formatadores para imprimir signed e se usarmos eles para imprimir um valor do tipo unsigned irá dar outro valor que 
    não é o certo. E isso, é um erro de lógica. */

    printf("O Valor de ii, valor máximo de uma variável do tipo int unsigned: %u\n", ii);

    printf("O tamanho de iiii tem que ser 16 bits, pois estou usando o uint16_t para definir que ela tenha esse tamanho, tamanho da variável em bits: %zu\n ", sizeof iiii * 8);

    printf("Valor máximo que cabe em iiii: %d, que é uma variável de 16 bits\n", iiii);

    printf("Testando o tamanho máximo da variável usando o short int. Tamanho máximo da variável: %zu bits\n ", sizeof iiiii * 8);

    printf("Testando o tamanho máximo da variável usando o long int. Tamanho máximo da variável: %zu bits\n", sizeof iiiiii * 8);

    printf("O valor máximo que cabe na váriavel iiiiii: %lu .Com essa mesma variável tendo um tamanho de 64 bits.\n", iiiiii);

    printf("Imprimindo o tamanho da variável iiiiiii: %zu bytes %zu bits. Utilizando o size_t\n", sizeof iiiiiii, sizeof iiiiiii * 8);

    printf("Imprimindo o valor da variável iiiiiii: %zu . Utilizando o size_t\n", iiiiiii);

    printf("Imprimindo o valor da variável iiiiiiii: %u . Utilizando o register int\n", iiiiiiii);

    printf("Imprimindo o tamanho da variável iiiiiiii: %zu bytes e %zu bits . Utilizando o register int\n", sizeof iiiiiiii, sizeof iiiiiiii * 8);

    printf("Imprimindo o tamanho da variável iiiiiiiii: %zu bytes e %zu bits . Utilizando o register long int\n", sizeof iiiiiiiiii, sizeof iiiiiiiiii * 8);

    return 0;   

}