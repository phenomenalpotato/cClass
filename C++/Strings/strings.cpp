#include <iostream>
#include <string> // Para usar String

// Uma string é um grupo de caracteres. Por caracteres eu falo de letras, numeros, simbolos etc. Basicamente, texto. Pode ser uma frase, um paragrafo, 
// Uma palavra, tudo isso é chamado de String. E nós precisamos de uma maneira de representar isso no nosso programa, e isso que String em C++ é.
// É uma maneira de nós de realmente representarmos e manipular esse texto. 

// Uma String é basicamente um Array de Caracteres. 

// A biblioteca Padrão do C++ tem uma Classe Chamada Strings. Na verdade, tem uma classe Template chamada Basic Strings e std::strings é uma versão  
// Templated dessa Classe. std::strings é o que você deve usar para Strings em C++

void PrintString(const std::string& string) { // Aqui estou esperando uma referencia do tipo String

    std::cout << string <<std::endl;

}

int main(void) {

    const char *name = "Rere";  // Isso é basicamente um maneira C-Style de definir uma String. Você não precisa usar o Const, mas pq as pessoas normalmente usam
                               // É pq você realmente não quer ir durante o seu código mudar esse valor, já que Strings são Imutaveis, no sentido que você não pode
                              // Mudar uma String e faze-la maior. "Rere"  é um bloco fixo de memória alocada. Caso queira uma String maior, terá que fazer
                             // Uma nova alocação de Memória, e deletar a String antiga 

    char name2[5] = {'R', 'e', 'r', 'e'};

    char name3[5] = {'R', 'e', 'r', 'e', 0};

    std::string name4 = "Rei"; 

    std::cout << name4.size() << std::endl; // E desde de que string é uma Classe, podemos ter vários Métodos. size é para achar o tamanho da String. 

    std::string name5 = std::string("Hello") + "Dude"; // Para fazer um append de uma String no final de outra

    name4.find("Re"); // Caso queira procurar por um texto em um String. Nesse caso, quero procurar por "re" na String name4

    bool contains = name4.find("Re") != std::string::npos;

    /*

        No fim dessa String "Rere" terá um byte 0. Que é o byte de Null Termination, com ele sabemos onde acabará essa String.

        Um C-String se declara com ''. "" Será a declaração de um Char Pointer.

        std::string tem uma Constructor que leva um char pointer ou um const char pointer.
    
    */

   printf("%s\n", name);

   std::cout << name2 << std::endl;

   printf("%s\n", name3);

   std::cout << name4 <<std::endl;

   std::cout << name5 <<std::endl;

   std::cout << contains <<std::endl;

    // name[2] = 'a'; // Graças a usar const não podemos mudar a variavel depois  

    // *(name + 2) = 'a'; // Não podemos fazer isso, dará um erro

    return 0;
}