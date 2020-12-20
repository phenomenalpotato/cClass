#include <iostream>

// using namespace std;

// Variable created inside namesmpace
// namespace first {

//     int val = 500;
// }

// Global variable
// int val = 100;

// A program to demonstrate need of namespace
// int main(void) {

    /* 
    
    int value;

    value = 0;

    double value; // <- Error here.  
     
        Em cada escopo, um nome só pode representar uma entidade. Então, não é possível duas variaveis com mesmo nome
        No mesmo escope. Usando Namespaces, nós podemos criar duas variáveis ou funções membros (member functions) tendo o mesmo nome. 

    
    value = 0.0f;

    */

   /*
   
    Aqui nós podemos ver que mais de uma variável estão sendo usadas sem reprotar nenhum erro. Isso é pq eles estão declaradas em um escopo e Namespace diferente.
   
   */

    // Local variable
    // int val = 200;

    // Essas variaveis podem ser acessadas de fora do Namespace usando o Escopo Operator ::
    // cout << first::val << '\n'; 

    // return 0;
// }

/*

                                                                        Definição e Criação:

    Namespaces nos permite agrupar Entidades Nomeadas que ao contrario teriam Escopo Global em escopos mais estreitos, dando a eles Escopos de Namespaces (namespaces scope).

        - Namespace é uma feature adicionada no C++ e não é presente em C;
        - Um Namespace é uma região declarativa que provem um Escopo para os indentificadores (Nomes dos tipos, funções, variáveis etc) dentro dele.
          Namespaces são usados para organizar o código em grupos logicos e prevenir colisões de nomes que podem ocorrer especialmente quando o seu código
          base incleu várias bibliotecas;
        - Múltiplos blocos de Namespaces com o mesmo nome são PERMITIDOS. Todas as declarações dentro destes blocos são declaradas no nome do Escopo; 

        - A definição de um Namespace começa com a Keyword namespace seguida pelo o nome da Namespace:

        namespace teste {

            int x, y; // Código de declaração onde x e y são declaradas em um escopo de um Namespace;
        } 

        - Declarações de Namespaces aparecem somente a nivel de Escopo Global;
        - Declarações de Namespaces podem ser Nested/ Aninhadas dentro de outro Namespaces;
        - Declarações de Namespaces não tem acess specifiers (Public ou Private);
        - Não há ponto e virgula ao fim das chaves;
        - Nós podemos dividir a definição atraves de varias unidades;

        


*/

// Creating Namespaces

// using namespace std;

// namespace ns1 {

//     int value(void) {

//         return 5;
//     }
// }

// namespace ns2 {

//     const double x = 100;

//     double value() {

//         return 2 * x;
//     }
// }

// int main(void) {

    // Acessando Função value dentro do Namespace ns1
    // cout << ns1::value() << '\n';

    // Acessando Função value dentro do Namespace ns2
    // cout << ns2::value() << '\n';

    // Acessando a variavel x diretamente
//     cout << ns2::x << '\n';

//     return 0;
// }

/*                                                              Classes And Namespace                                                                       */

// A seguir uma maneira simples para demostrar uma Classe em um Namespace

// using namespace std;

// namespace ns {

    // Uma Classe em um Namespace
    // class geek {

//         public:

//             void Display(void) {

//                 cout << "ns::geek::Display()\n";
//             }
//     };
// }

// int main(void) {

//     // Criando um objeto para a Classe geek. Usando o Operator :: para acesar o Namespace ns
//     ns::geek obj;

//     obj.Display();

//     return 0;
// }

/*                             Classe também podem ser declaradas dentro de um Namespace e Definidas fora do mesmo Namespace                                     */

// Um program em C++ para demosntrar o uso de uma Class em um Namespace

// using namespace std;

// namespace ns {

    // Somente declarando a Classe aqui
//     class geek;
// }

// class ns::geek {

// public:

//     void display(void) {

//         cout << "ns::geek:: display()\n";
//     }

// };

// int main(void) {

    // Criando o Objeto da Classe geek
//     ns::geek obj;

//     obj.display();

//     return 0;
// }

/*                                                  Nós Podemos definir Metodos também fora do Namespace                                                */

// Um programa em C++ para demonstrar que podemos definir Metodos fora do Namespace

using namespace std;

// Criando os Namespaces

namespace ns {

    void display();

    class geek {

        public:
            void display(void); 
    };
}

// Definindo metodos do Namespace

void ns::geek::display() {

    cout << "ns::geek::display()\n";
}

void ns::display() { 

    cout << "ns::display()\n";

}

// Driver code
int main(void) {

    ns::geek obj;

    ns::display();

    obj.display();

    return 0;
}