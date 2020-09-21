// Operações com Ponteiros

/* Um ponteiro pode ter o valor especial NULL que é o "zero" (aponta para nenhum endereço) de ponteiros. 

Exemplo: 

    int *p = NULL;

*/

/* #include <stdio.h>

int main(void) {

    int *ptr = NULL, *ptr1 = NULL;

    int numero, total;

    numero = 20;

    ptr = &numero;

    ptr1 = ptr; // Ambos estão apontando para o endereço de numero

    printf("Valor de onde o ponteiro ptr está apontando = %d\n", *ptr);

    printf("Valor de onde o ponteiro ptr1 está apontando = %d\n", *ptr1);

    // A variável apontada por ptr1 recebe o mesmo conteúdo da variável apontada por ptr. 

    total = 10;

    ptr1 = &total;

    printf("Valor de onde o ponteiro ptr está apontando = %d\n", *ptr);

    printf("Valor de onde o ponteiro ptr1 está apontando = %d\n", *ptr1);

    return 0;

} */

/* Apenas duas operações aritméticas podem ser utilizadas com ponteiros: Adição e Subtração. Muito útil para trabalhar com arrays. 

Podemos somar e subtrair apenas valores INTEIROS. 

p++; Soma +1 no endereço armazenado no ponteiro. 

p--; Subtrai 1 no endereço armazenado no ponteiro. */

/* Com relação ao conteúdo apontado, valem todas as operações. 

(*p)++; Incrementar o conteúdo da variável apontada pelo ponteiro p

*p = (*p) * 10; Multiplica o conteúdo da variável apontada pelo ponteiro p por 10 */

/* Operações relacionais 

== e != Para saber se dois ponteiro são iguais ou diferentes. 

>, <, >=, =< Para saber qual a posição (endereço) mais alto na memória ocupado por um ponteiro. */

// ------------------------------------------------------------------------============================================================

// Ponteiros e Vetores

/* Arrays são conjuntos de dados do mesmo tipo dispostos continuamente (um depois do outro) na memória. 

No momento da declaração de um array, informamos ao computador para reservar uma certa quantidade de memória a fim de armazenar os elementos do array de 
forma sequencial.

A variável array é um ponteiro que aponta para o começo da sequencia elementos do vetor na memória. Portanto, podemos inicializar uma variável ponteiro com o 
endereço de início do vetor. 
                                                           ----------------------------------
                                                           | Endereço | Variável | Conteúdo |
                                                           |   1004   |   *ptr   |   1006   |
                                                           |          |          |          |
                                         |-----------------|   1006   | array[0] |    'a'   | 
                                         |                 |   1007   | array[1] |    'b'   |
                                         |  char array[5]  |   1008   | array[2] |    'c'   |
                                         |                 |   1009   | array[3] |    'd'   |
                                         |-----------------|   1010   | array[4] |    'e'   |
                                                           ----------------------------------      */

#include <stdio.h>

int main(void) {

    char *ptr;

    int i;

    char array[5] = {'a', 'b', 'c', 'd', 'e'};

    ptr = array; // O ponteiro ptr aponta para o primeiro elemento do array

    for(i = 0; i < 5; i++) {

        printf("O valor dos elementos do Array sendo acessado via ponteiro ptr: %c. Elemento [%d] do Array\n", *ptr, i);

        ptr++;

    }

    return 0;
}

/* Em resumo: 

*ptr é equivalente a array[0];

array[indice] é equivalente a *(ptr+indice);

array é equivalente a &array[0];

&array[indice] é equivalente a (array + indice); */

/* As matrizes, apesar de terem mais de uma dimensão, são dispostas linearmente na memória e, por isso, podem ser manipuladas com ponteiros semelhantes aos arrays.

Ex: int mat[5][5];

                0,0                       1,0                       2,0                     3,0                      4,0                  4,4
                 --   --   --   --    --   --   --   --   --   --   --   --   --   --   --   --   --   --   --   --   --   --   --   --   --
                |  | |  | |  | |  |  |  | |  | |  | |  | |  | |  | |  | |  | |  | |  | |  | |  | |  | |  | |  | |  | |  | |  | |  | |  | |  |         
                 --   --   --   --    --   --   --   --   --   --   --   --   --   --   --   --   --   --   --   --   --   --   --   --   --    

*/