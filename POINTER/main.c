#include <stdio.h>

#include <stdlib.h> // Para usar o malloc()

int main(int argc, char *argv[]) {
  
    // printf("Número de argumentos: %d\n", argc);
    
    // puts(argv[0]); // Irá imprimir o primeiro elemento de argv. Que nesse, caso é o nome do programa, que é passado para a função quando executa o programa 

    // int i;

    // for (i=0 ;i < argc ; i++) {

    //     puts(argv[i]);
    // }

    int i; // Alocando 4 bytes na memória para um int32

    printf("O endereço de i é: %p\nTamanho da variável de i em bytes: %zu\n\n", &i, sizeof(i));

    int *p = &i; // Inicializando um ponteiro e atribuindo o endereço de memória da variável i para ele

    printf("O endereço do ponteiro p é: %p\nTamanho do ponteiro p em bytes: %zu\n\n", &p, sizeof(p));

    // int *p = NULL; Inicializando um ponteiro com nenhum conteúdo/ apontado para nenhum endereço de memória

    printf("Conteudo do ponteiro p: %p\n", p);

    *p = 9;

    printf("Dado que está sendo recuperado pelo o ponteiro p: %d\n", *p);

    int *j = NULL;

    /* Fazendo uma alocação dinamica */

    j = malloc(sizeof (int)); // malloc() significa Memory Allocation. Ela aloca memória. Mas quanto de memória ela irá alocar? O quanto você quiser!
                            // Nesse caso nós pedimos 4 bytes usando o operador sizeof(int) para ele resultar em 4. Mas seria a mesma coisa que usar 
                            // malloc(4);
 
    *j = 9;

    printf("j = %d\n", *j);

    /* Depois de usar a memória alocada, deve desalocar ela. Se não isso pode se tornar um issue de segurança*/

    free(j);

    return 0;
}