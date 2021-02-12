#include <iostream>

/*

Um Constructor é basicamente um tipo especial de Metodo que é executado cada vez que nós intanciamos um objeto. Por exemplo, digamos que queiramos criar uma 
Classe Entity.

*/

class Entity {

// private: // Caso eu queira, posso fazer as minhas Constructs Privadas

//     Entity() {

//         x = 0.0f;

//         y = 0.0f;
//     }



public:

    // Entity() = delete;// Caso eu queira deleatar a Construct Padrão que é criada.
    
    float x, y;

    // void Init(void) { // <- Isso já não é mais necessário, pois, a Construct já irá fazer isso para nós toda a vez que um objeto for instanciado

    //     x = 0;

    //     y = 0;

    // }

    Entity() {

        x = 0.0f;

        y = 0.0f;
    }

    Entity(float X, float Y) {

        x = X;

        y = Y;

    }

    void Print(void) {

        printf("%.1f, %.1f\n", x, y);
    } 

};

int main(void) {

    // Entity e; // Instanciando o objeto e

    Entity e(10.0f, 5.0f); // Passando o meus parametros para a Construct no exato momento de instanciar um objeto

    // e.Init(); // Chamando o metodo Init() para inicializar com o valor zero as variaveis x e y dentro da Classe Entity. Caso eu não inicie essas variaveis com 
             // Algum valor, elas pegaram um valor aleatorio que pode estar nesse endereço de memória.

    /* 
    
    Também, caso queiramos instanciar outros objetos como Entity e1, Entity e2 Entity e... teremos que chamar esse mesmo metodo Init() para inicializar as
    Variaveis.

    Mas e se existisse uma maneira de inicializar essas variaveis enquanto nós contruimos uma Entity? Ai, é que entra a Construct.

    Uma Construct é um tipo de metodo especial na qual é basicamente o que fizemos acima com o Init()

    É um metodo que é chamado todo a vez que você constroi um objeto. Nós definimos ela como qualquer outro metodo, mas ela não tem nenhum tipo de retorno 
    e seu nome deve ser o mesmo nome da Classe. Por exemplo, seguindo o exemplo que estamos fazendo:

    class Entity {

        Entity() { // <- Constructor

            x = 0.0f;

            y = 0.0f;

        } 

    Mesmo quando você não declara uma Construct, você ainda terá uma Construct que é chamada de Padrão que já é provisionada para você. Mas essa Construct 
    Padrão não faz nada para você. Ela seria basicamente isso:

        Entity() {


        }

    };

    Eu também posso fazer quantos Constructs que eu queira.

    Em algumas liguagens como Java, Tipos Primitivos como int e float são automaticamente inicializadas com 0. Mas, esse não é o caso com C++, você deve
    Inicializar as suas variaves do Tipo Primitivo manualmente.     

    */

    // printf("%.1f, %.1f\n", e.x, e.y);

    e.Print();

    return 0;
}