#include <iostream>
#include <string.h> // Para usar a função memset()

// Um ponteiro é um int que armazena um endereço de memória.

int main(void) {

    int var = 8;

    // void * ptr = nullptr; // 0 Não é um endereço válido de memória. nullptr é uma keyword introduzida para somente o C++

    int * ptr = &var;

    *ptr = 10; // Com o operador * eu estou direferenciando esse dado, no caso, a variaável var. Agora eu estou acessando o dado e posso tanto ler ou escrever 
            // nesse dado

    printf("%d\n", var);

    char *buffer = new char[8]; // O que está acontecendo aqui é que estou pedindo 8 bytes de memória. O keyword new char[8] alocou 8 bytes de memória e está retornando 
                               // Pointer para o começo desse bloco de memória.

    memset(buffer, 0, 8); // Irá preencher os 8 bytes desse espaço de memória por 0

    char **ptr = &buffer; // Aqui estou utilizando um ponteiro que está apontando para outro ponteiro buffer;

    delete[] buffer; // Com o keyword delete

    return 0;
}