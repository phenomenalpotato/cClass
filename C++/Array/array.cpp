#include <iostream>
#include <array> // Caso queira usar o Standart Array


// Um Array é basicamente uma coleção de elementos do mesmo tipo. Em C++, um Array é uma maneira de representar uma coleção de Variaveis em sequencia. 

// Em C++11, nós temos algo chamado Standart Array, que é algo realmente construido dentro da LIBRARY do C++11. Vantagens dele é que ele tem:
    // - Bouce Check: Capacidade de verificar se estamos escrevendo fora do escopo do Array ou não;
    // - E também mantem em check o tamanho do Array;

class Entity {

public:

    int example[5];

    std::array <int, 5> outro; // Caso queira usar o Standart Array. <int <- é o tipo do Array, 5 <- São quanto elemento terá>

    Entity() {

        int B[5];

        int count = sizeof(B) / sizeof(int); // Para descobrir o escopo do Array. Nesse caso é 5. Você só pode usar isso, quando o Array estiver alocado 
                                            // Na Stack, não pode estar alocado na Heap, se são irá trazer uma informação errada.

        for(int i = 0; i < 5; i++) {

            example[i] = 2;
        }
    }

};

int main(void) {

    Entity e;

    int ple[5]; // Criando um Array. Acabei de alocar espaço o suficiente para esses 5 int. O que está entre [] será o Index

    int *ptr = ple;

    /*

        Um Array é realmente só um Ponteiro, nesse caso, um Ponteiro Inteiro para um bloco de memória na qual contem o 5 inteiros.  
    
    */

    ple[0] = 2; // Primeiro Elemento do Array

    ple[4] = 4; // Último Elemento do Array

    *(ptr + 4) = 6;

    printf("%d\n", *(ptr + 4));

    int a = ple[0];

    // example[5] = 10; // Com isso, ocorrerá um Access Memory Violation. Pois, você está tentando escrever em uma parte da Memória que não pertence a você.

    printf("%d\n", ple[0]);

    for(int i = 0; i < 5; i++) {

        ple[i] = 2;
    }

    printf("%d\n", ple[2]);

    *(ptr + 2) = 10;

    printf("%d\n", *(ptr + 2));

    // Tudo o que você alocar com a Keyword new será alocada na Heap, e terá o seu tempo de vida se nós deletermos ela manualmente com a Keyword delete
    // Ou quando o nosso programa para de executar

    int *pont = new int[5];

    delete[] pont; // Já que usamos o new como um Array, temos que usar o delete com []

    // Se você não usar o Keyword New não é para usar a Keyword delete

    // Enquanto no caso de um nós criarmos um Array, ele será alocado na Stack e durará somente enquanto nós atingirmos o [] e o seu escopo terminar

    int exe[5];

    e.outro[2] = 12;

    printf("%d\n", e.outro[2]); // Acessando o Standart Array que está na classe Entity

    // e.outro[6] = 110; // Graças ao Bounce Check do Standard Array, isso já daria erro, pois, estou tentando acessar um local de memória que não é 
                        // Do escopo to Array[5]. Diferente do exemplo abaixo do Array "Cru" ple[5] que pode ser que de um erro. 

    // ple[10] = 120;

    return 0;
}