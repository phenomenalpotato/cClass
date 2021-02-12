// Topic: Best Way to Use Vector in C++

/*

Um Vector é um Linked List + Array;

                |
                ---> Linked List: Significa que você pode crescer dinamicamente.
                                   |
                                   ---> Array: Melhor feature é Arra[i];

A principal diferença entre os dois é que na List para pegar um dado dentro dela, você terá que passar por todos os outros dados até chegar no que você quer. 
Já no caso do Array, você pode simplesmente irá diretamente onde esse dados está. Você não precisará ficar viajando dentro do Container, será mais rápido.
O problema do Array, é que ele é de um tamanho fixo. Não pode crescer dinamicamente.

Com isso, surgiu o Vector, o melhor dos dois mundos.

*/

// PROBLEM IN VECTOR?

#include<iostream>
#include<vector>

int main(void) {

    std::vector<int> vec; // Nesse momento, Size e Capacity de vec é 0 

    // for(int i = 0; i < 32; ++i) {

    //     vec.push_back(i);

    //     std::cout << "Size: " << vec.size() << " " << "Capacity: " << vec.capacity() << std::endl;  // Size == Quantos elementos existe no Vetor. 
                                                                                                   // Capacity == Quantos elementos meu Vetor pode armazenar. 

        vec.reserve(1000);

        for(int i = 0;i < 32; ++i) {

            vec.push_back(i);

            std::cout << "Size: " << vec.size() << " " << "Capacity: " << vec.capacity() << std::endl;
        }

        // vec.at(100); // Dará erro por causa do método .at() já que mesmo a capacidade desse Vector sendo 1000 nós não colocamos nenhum dado no elemento 100
                                                                                                   
/*

Quando não há mais espaço no Array, o Vector irá dobrar de Capacidade. Quando um Vector não conseguir mais acomodar novos elementos ele irá criar um novo array
e copiar todo os elementos anteriores do antigo array para o novo Array. E logo após fazer o push_back() desse novo valor. Isso tudo toma um tempo do Computador fazer.

E a solução para que não tome muito tempo é uma função chamada vector.reserve(numero) <- Isso irá criar um array de tamanho 1000. Você pode mesclar entre 
Colocar um tamanho fixado E.g. vec.reserve(1000) e depois continuar mesmo tendo um valor fixado, adicionar mais elementos nesse mesmo Vector.

vector.resize(numero);

*/

    return 0;
}