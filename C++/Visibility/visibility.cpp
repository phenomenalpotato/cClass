#include <iostream>

// Visibilidade refere-se a quão visivel alguns membros ou metodos de uma Classe realmente são. E quando falo sobre Visivel, quero dizer quem pode ve-los
// E quem pode chama-los e usa-los. Isso é algo que existe na linguagem para te ajudar a ter mais organização e escrever melhor o seu Código. 

/*

Existem 3 tipos d Modificadores de Visibilidade em C++:

    - Protected: Significa que a Classe onde está e todas as suas Sub-Classes na Hierarquia podem acessar os seus atributos e métodos. É mais Visivel do que 
    Private e menos Visivel do que Public;

    - Private: Significa, que somente a Classe em que está pode acessar os atributos e métodos; Se usar a Keyword friend, você pode rotular uma Função ou Classe
    como Friend de uma Classe. E o que friend significa é que uma Função ou Classe friend pode acessar membros Privados dessa Classe.
   
    - Public: É visivel para as Classes e Funções. Todas as Classes e Funções podem ve-la;

*/

/*

    É algo usado por Humanos para Humanos, para que um possa entender melhor o Código e consiga ao ler, dizer o que deve ser acessado ou não dentro de uma Classe.

    Por exemplo, se estou vendo uma Classe que é parte de uma API e vejo que existe uma Função Privada que eu quero chamar, eu sei que não deveria chamar essa 
    Private Function. O autor dessa Classe provavelmente provem outras formas de ter a mesma informação. Provavelmente se eu chamar essa Private Function,
    Eu não teria a informação que eu quero, talvez quebre alguma coisa.

*/

class Entity { // Como isso é uma Classe, a Visibilidade Padrão é Private. No caso de uma Strcut o Padrão é Public

// private:

//     int X, Y;

//     void Print(void) {


//     }

// protected:

//     int X, Y;

//     void Print(void) {


//     }

public:

    int X, Y;

    void Print(void) {


    }

public:

    Entity() {

        X = 1; 

        Y = 0;

        Print();
    }

};

class Player : public Entity {

public:

    Player() { 
        
        // Com a Keyword Protected, posso acessar essas variaveis e metodos que estão na Classe Pai Entity.

        X = 2; // Também não posso acessar X que está como Private na Classe Entity. Mesmo Player sendo uma Sub-Classe de Entity
    }


};

int main(void) {

    Entity obj;

    Player jogador;

    // obj.X = 2; // Não posso acessar X da Função Main() pois ela está como Private na Classe, e só quem está nessa Classe tem Visibilidade dela

    printf("%d\n", obj.X); // Ao usar a Keyword Public, posso acessar o que está na Classe da Função main()


    return 0;
}