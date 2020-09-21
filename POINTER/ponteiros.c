/* Antes de apresentarmos ponteiros, vamos relembrar o conceito de variável. 
   A memória é formada por um conjunto de espaços, denominados variáveis, onde guardamos os dados.
   Esses "espaços" são identificados por nomes (interno nos programas), e por números ou "endereços" (externo aos programas), utilizados pelos programas
   para acessar os dados.
   
   A figura abaixo exibe um trecho da memória:
    
                                                Endereço na      Conteúdo na memória
                                                  Memória           |              | 
                                                    2999            |--------------|
                                                    3000            |--------------|
                                                    3001            |--------------|
                                                    3002            |--------------|
                                                    3003            |--------------|
                                                    3004            |--------------|
                                                    3005            |--------------|
                                                    3006            |              |  */

/* Suponha que você declarou uma variável denominada "Total" em seu programa. Essa variável será associada a um (ou mais) endereço(s) na memória (endereço 3001),
conforme a figura abaixo: */

                                            /*  Endereço na      Conteúdo na memória
                                                  Memória           |              | 
                                                    2999            |--------------|
                                                    3000            |--------------|
                                        total ->    3001            |--------------|
                                                    3002            |--------------|
                                                    3003            |--------------|
                                                    3004            |--------------|
                                                    3005            |--------------|
                                                    3006            |              |  */

/* Agora você move o valor 100 para a variável Total (total = 100;), o programa procura o endereço da variável e move o valor. */

                                            /*  Endereço na      Conteúdo na memória
                                                  Memória           |              | 
                                                    2999            |--------------|
                                                    3000            |--------------|
                                        total ->    3001            |-----100------|
                                                    3002            |--------------|
                                                    3003            |--------------|
                                                    3004            |--------------|
                                                    3005            |--------------|
                                                    3006            |              |  */

/* Com isso dito, podemos começar a definir Ponteiros 
Ponteiros são variéveis que armazenam endereços (de outras variáveis) ao invés de armazenarem valor. O conteúdo de uma variável ponteiro é o endereço de outra variável.
Suponha que você defina a variável ptr como sendo ponteiro e armazene o endereço 3001. Essa variável estará armazenado o endereço da variável Total, conforme figura abaixo:*/

                                            /*  Endereço na      Conteúdo na memória
                                                  Memória           |              | 
                                     |----> ptr     2999            |-----3001-----|
                                     |              3000            |--------------|
                                     |<---total >   3001            |-----100------|
                                                    3002            |--------------|
                                                    3003            |--------------|
                                                    3004            |--------------|
                                                    3005            |--------------|
                                                    3006            |              |  */

/* Assim dizemos que a variável ptr está "apontando" para a variável Total, isto é, qualquer alteração em ptr irá alterar o conteúdo de Total.

Os ponteiros são usados em muitas linguagens de programação para manipular cadeias de caracteres, passar para parâmetros para funções, manipulando matrizes
de dados e criação de listaa ligadas e outras estrturas de dados complexas. 

Ponteiros proporcionam uma grande flexibilidade para o gerenciamento de memória e otimização de programas. */

/* ----------------------------------------------------------------------------------------------------------------------------------------------------------- */

/* Para se declarar uma variável em C, devemos declarar o seu tipo e dar um nome (identificador):

    tipo_da_variavel var; 

Para se declarar uma variável ponteiro em C, é necessário também declarar o seu e o nome, mas na frente do nome colocar um asterisco(*):

    tipo_da_variavel *var;
    
É o asterisco (*) que informa ao compilador que aquela variável não vai guardar um valor mas sim um endereço para o tipo especificado.

                                                        int *x; | Aponta para uma variável int
                                                        float *y; | Aponta para uma variável float
                                                        struct ponto *p; | Aponta para uma variável Struct */

/* Para serem usados, os ponteiros precisam ser inicializados. Para inicializarmos uma variável ponteiro com o endereço de outra variável, usamos o operador & */

#include <stdio.h>

int main(void) {

    int numero;
    int *ptr;

    numero = 100;  
    
    ptr = &numero;
    
    /* | Endereço | Variável | Conteúdo | 
       | 1004     | numero   |    100   |
       | 1005     |          |          |
       | 1006     | *ptr     |   1004   |  */



/* Para imprimir o conteúdo da variável a partir do ponteiro ptr basta colocar o asterisco na frente da variável: */

                        printf("O endereço da variável numero: %p, endereço do ponteiro ptr: %p\n", &numero, ptr);

                        printf("O conteúdo da variável numero = %d\n", *ptr); // <-- Conteúdo da variável número

                        *ptr = *ptr * 10; // Multiplica o conteúdo da variável numero por 10

                        printf("Conteudo de numero = %d\n", numero);

    return 0;
}

/* ptr: Conteúdo é o endereço de memória numero;
  *ptr: Conteúdo é o valor da variável apontada por p, nesse caso, a variável numero;
  &numero: É o endereço na memória da variável numero */
