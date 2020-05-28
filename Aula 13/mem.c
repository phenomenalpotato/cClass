#include <stdio.h>
#include <stdlib.h>
#include <string.h> // Para utilizar a memset

// Forma de fazer o teste se o sistema tem memória sufuciente. Dessa forma, fazendo esse teste ao criar uma MACRO
#define MALLOC(ptr, size) { \
    ptr = malloc(size); \
    if (ptr == NULL) { \
        fprintf(stderr, "Memória Insuficiente\n"); \
        exit(1); \
    }\
}

void *malloc_s(size_t size){ // Forma de fazer o teste se o sistema tem memória sufuciente. Dessa forma, fazendo esse teste ao criar uma função

    void *ptr;

    ptr = malloc(size);

    if (ptr == NULL) {

        fprintf(stderr, "Memória Insuficiente\n"); // Irá printar na saida padrão
        exit(1); // Irá encerrar o programa
    
    }
    
    return ptr;
}


int main(int argc, char *argv[]) {

    int *p;

    // p = malloc(sizeof(int)); O conteudo do ponteiro p, onde ele irá apontar será o endereço e memória de 4 bytes que será alocado pela a função malloc.   
                  // A função malloc irá retornar um endereço para a memória alocada. Então ela vai alocar 4 bytes em memória e retornar esse endereço
                  // de memória.

    // *p = 9; // Mas não é legal alocar memória e já sair usando. Pq pode ser que a memória do Sistema acabe, por isso é importante testar.

    // Depois que o p foi alocado é preciso testar se o p é igual a NULL. Isso pq a malloc irá retornar nulo quando ela não consegue alocar. 
    // Por isso, se p for NULL quer dizer que ela não conseguiu alocar.

    // p = malloc_s(sizeof(int));

    MALLOC(p, 5 * sizeof(int)); // E se eu  quisesse alocar 5 arrays de inteiros nessa memória? Eu só preciso fazer 5 * sizeof(int). Com isso, eu vou conseguir
                                // Colocar 5 números inteiros nessa memória.

    // if (p == NULL)

    // {

    //     return 1;
        
    // }

    memset(p, 0, 5 * sizeof(int)); // Basicamente, é zerar aquele espaço de memória. Isso já inicializará a memória, ou seja, 
                                   //irá inicializar/ ṕreencher esses 5 espaços (20 bytes) em memória com 0.

    *p = 9;
    *(p + 1) = 43;
    *(p + 2) = 65;
    *(p + 3) = 11;
    *(p + 4) = 23;
    // *(p + 5) = 90; Nós só alocamos 5 inteiros na memória utilizando o malloc. Seria perigoso ir para o endereço de memória seguinte e colocar algum valor lá
    // Já que não sabemos o que tem lá.

    for (int i = 0 ; i <  5; i++) {

    printf("%d\n", *(p +  i));

}

*(p + 5) = 120;

printf("%d\n", *(p + 5));

p = realloc(p, sizeof(int) * 6); // Realocando um espaço de memória usando a função realoc

 
    free(p); // Um problema grave que pode acontecer quando vc não libera um espaço de memória que foi alocado, é que pode surgir um problema de Memory Leak
    // Vazamento de Memória. Quando você usa esse bloco de memória e depois libera ele, isso é chamado de "User After Free". 
    // Tenha certeza de após usar essa memória liberar ela, pois, você só precisa liberar ela uma vez. Você na faŕa, por exemplo: 
                                                                                                                // free(p);
                                                                                                                // free(p);
    // Você irá liberar somente uma vezo free(p); essa memória depois de utilizar ela.

    return 0;
}