#include <iostream>

using namespace std; // Com isso, posso tirar a declaração de que estou acessando o namespace std. Por exemplo, std::string só fica string

// Polimorfismo = Poli == Muitas & Morfo == Formas

// O Polimorfismo, permite que um mesmo nome represente vários compartamentos diferentes. Por exemplo, um mesmo metodo pode ser utilizado de diferentes maneiras. 
// Todo o metodo tem uma assinatura, basicamente a Assinatura do Metodo consiste em as Quantidades e os tipod de Parâmetros. 

/*

    void Fun(int a, int b) {


    }

    void Fun(int a, int b) {

        
    }

    As duas assinaturas acima terão a mesma assinatura, pois, tem o mesmo tipo e quantidade de paramentros. O tipo do retorno no conta.

*/

/* 

Existem 4 tipos de Polimorfismos, os 2 mais usados são: 

Polimorfismo de Sobrebosição, é dos Polimorfismos mais utilizados. Acontece quando substituimos a implementação de um metodo de uma SupeClasse na sua Sub Classe,
usando a mesma assinatura. Acontece quando substituimos um Método de uma Super Classe na sua Sub Classe, usando a mesma assinatura.

Polimorfismo de Sobrecarga, é você ter o mesmo Método com o mesmo Nome, uma Implementação diferente na mesma Classe, mas só que com Assinaturas diferentes.

*/

// Uma Classe é abstrata se tiver pelo menos uma Virtual Function Pura

class Cachorro {

protected: // Com a keyword protected, eu posso dar acesso aos atributos as Classes filhos

    int membros;

public:

    virtual void mover(void) = 0; // A pure virual Function. Uma Virtual Function Pura só é declarada com 0. A implementação ocorrerá na Sub classe.

};

class pitbull : public Cachorro {

public:

    void mover(void) override {

        string andar = "Andando";

        cout << andar << endl;

    }

    // void mover(void) override { // Não posso fazer o override duas vezes na mesma Classe

    //     int a;
    // }

};

// class dog : public Cachorro { // Se não Rescrevermos a Virtual Function Pura na Classe Filho, então essa Classe Filho também será uma Classe Abstrata


// };

int main(void) {

    pitbull jonny;

    jonny.mover();

    // Cachorro c; // Classes Abstratas não podem ser objetos.

    // dog d; // Classes Abstratas não podem ser objetos.

    return 0;
}