#include <iostream>

// Const da visibilidade para Classes e Structs. É um mecanismo para fazer o nosso código mais limpo e forçar certas regras que outros desenvolvedores terão
// Que seguir com o nosso código. É como se fosse uma promesa que você da na qual, algo será Constante e não irá mudar. De qualquer maneira é só uma promesa
// Você pode fazer um bypass e "quebrar a sua promesa". 

class Entity {

private:

    int m_X, m_Y;
    mutable int var; // mutable é uma Keyword que quer dizer que algo irá mudar

public:

    int GetX() const { // const no lado direito só funciona em uma Classe. E significa, esse Metodo não irá modificar nada da Classe Atual, ou seja, nesse caso
                      // Não será possivel mudar Variaveis Membros dessa Classe. É como se fosse um Metodod READ-ONLY. Irá somente ler dados dessa Classe, mas
                     // Não irá modificar nada.   

        // m_X = 2; // Não consigo fazer essa modificação, pois, graças a const, esse Metodo não conseguirá mudar nenhuma variavel dessa Classe.

        var = 2; // Mesmo sendo um const Metodo, graças a Keyword mutable, eu consigo dentro desse Metodo mudar uma variavel que está dentro dessa Classe.

        return m_X;
    }

    int SetX(int x) { // Não posso usar aqui const, pois irei, com esse Metodo modificar o dado dentro da variavel m_X 

        m_X = x;

    }

};

void Print(const Entity& t) {

    std::cout << t.GetX() <<std::endl;
}

int main(void) {

    Entity e;



    const int a = 5; // Com o const, você especificou que você não irá modifica-la depois 

    const int MAX_AGE = 90; 

    const int *b = new int; // Aqui eu não posso mudar o conteudo do ponteiro (*b = 2). Mas posso modificar onde está fazendo a referencia (b = (int*)&MAX_AGE)

    // int* const b = new int; // Aqui eu posso modificar o conteudo do ponteiro (*b = 2), 
                           // Mas eu não posso reasinalar o ponteiro para apontar para outro lugar(b = (int*)&MAX_AGE)

    // *b = 2;
    
    b = (int *)&MAX_AGE;

    printf("%d\n", *b);

    // a = 10; // Não sendo uma Constante, posso mudar o valor de ao longo do programa. 

    return 0;
}