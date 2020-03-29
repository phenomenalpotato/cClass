#include <stdio.h>

int main(void) {

    /* Declarando uma variável */

    char c;

    /* Na maioria das implementações, esse signed já está implicito. Ou seja, é um tipo de variável char com sinal.   */ 

    signed char cc;

    /* Uma variável sem sinal, ou seja, todas as suas representações númericas serão positivas. */

    unsigned char ccc;

    /* Operador sizeof que vai conseguir dizer o tamnho da variável c. %lu quer dizer long and unsigned, até poderia-se usar o %d, nesse caso, pq o tamanho 
    irá coincidir para fazer a troca do valor da operação que ocorrerá com o sizeof c. Mas, com outra variável o valor poderia ser substituido errado. Pois, o 
    valor pode ser muito grande e %d pode não conseguir imprimir. */

    printf("Tamanho da variável c = %lu\n",sizeof c); 

    /* O sizeof é um operador (basicamente um operador é um símbolo que diz ao compilador para fazer uma certa manipulação matemática ou lógica). 
    Mesmo que o (char), nesse caso, esteja em parenteses ele não é um função. Nesse caso, é só um argumento para o compliador. */

    /* Ao invés de declarar o valor da variável c e perguntar o tamanho da variável, eu pego o valor do tipo dela. */  

    printf("O tamanho do tipo da variável é = %lu\n", sizeof (char));

    /* Agora para saber o tamanho da variável em bits */

    printf("O tamanho da variável em %lu bytes e em %lu bits respectivamente\n", sizeof c, sizeof c * 8); 

    /* Caso, eu coloque aqui nessa variável o valor númerico 256 que é um bit maior do que cabe nessa variável (255). Ele dará um erro Overflow. */

    cc = 255;

    /* O %i é igual ao %d.*/

    printf("O valor de cc: %d\n", cc);

    ccc = 255;

    printf("O valor de ccc: %i\n", ccc);

    return 0;

}