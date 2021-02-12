// TOPICO: std::array -> Isso é um container

// Syntax: std::array<Type, N> array;

/*

Notice:

    1. std::array é um container (containers irão armazenar os valores) que encapsula tamanhos fixos de arrays
    2. arraysize é preciso no momento da compilação
    3. Assign by value é realmente por valor
    4. Acessar os Elementos:
        a. at() -> Mais seguro que a maneira b abaixo. Pois, caso você queira acessar o elemento 7 de um array com tamanho total 5, ele irá retornar um erro "Out of Bound" 
        b. []
        c. front() -> Irá te dar o primeiro elemento do Array
        d. back() -> Irá te dar o último elemento do array 
        e. data() -> Da acesso/ irá retornar o pointer para o Underlying array

*/

#include <iostream>
#include <array>

int main(void) {

    // Declarando
    std::array<int, 5> myarray;

    // Inicializando
    std::array<int, 5> myarray2 = {1, 2, 3, 4, 5}; // Initializer list

    std::array<int, 5> myarray3 {1, 2, 3, 4, 5}; // Uniform Initialization

    // Assign using initializer list

    std::array<int, 5> myarray4;

    myarray4 = {1, 2, 3, 4, 5}

    return 0;
}