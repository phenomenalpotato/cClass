#include <iostream>

/*

    Uma Destruct é executada somente quando você destrói um objeto. Ou seja, toda vez que um objeto é destruido uma Destruct é chamada/ executada. Basicamente, 
    Para Construct, você chama ela, por exemplo, inicializar uma variável. No caso de uma Destruct, você poderia chamar ela para desinicializar as mesmas para 
    Limpar qualquer lugar na memória que você usou.

*/

class Entity { 

public:
    
    float x, y;

    Entity() {

        x = 0;

        y = 0;

        printf("Construido!\n");
    }

    ~Entity() { // Definindo um Destruct com o nome da Classe e ~

        printf("Destruido!\n");

    }

    void Print(void) {

        printf("%.1f, %.1f\n", x, y);
    }


};

    void Function(void) {

        Entity e;

        e.Print(); // A Desconstruct será chamada no momento que o nosso escopo acabar. Nesse caso, o fim do escopo é a função Function()

        e.~Entity(); // Caso queira chamar manualmente a Desconstruct

        printf("Fim Da Function!\n"); 
    }

int main(void) {

    Function();    

    return 0;
}