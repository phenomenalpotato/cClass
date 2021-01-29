/*

TOPICO: std::vector<Type> name_vector;

NOTAS: 
    1. std::vector é um sequence container e também conhecido como Dynamic Array ou Array List.
        a. Sequence Container é qualquer que seja o valor que você dará dentro desse Vector será armazenado sequencialmente, não será armazenado randomicamente.
    2. O seu tamanho pode crescer e encolher dinamicamente, e não precisa prover tamanho no momento de compilar.

ACESSO AO ELEMENTO:
    at(),
    [],
    front(),
    back(),
    data()

MODIFICADORES:
    insert(),
    emplace(),
    push_back(),
    emplace_back(),
    pop_back(),
    rezise(),
    swap(),
    erase(),
    clear()

*/

#include  <iostream>
#include <vector>

int main(void) {

    // Declarações
    std::vector<int> vec;

    std::vector<int> vec2(5, 20); // (5, 20) 5 será o tamanho, e 20 será o valor colocado em todos 5 os espaços

    std::vector<int> vec3 = {1, 2, 3, 4, 5}; // Initializer list

    std::vector<int> vec4 {1, 2, 3, 4, 5}; // Uniform Initialization

    // Acessando os Elementos
    vec2[3] = 10;

    vec2.at(3) = 10; // com o metodo at() caso vc tente acessar um elemento fora do array ele dará um erro. Não irá te retornar lixo da memória
    

    return 0;
}