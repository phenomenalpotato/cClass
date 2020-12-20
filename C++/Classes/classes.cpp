#include <iostream>

/*

Classes são uma maneira de agrupar dados e/ ou funcionalidades juntas. Por exemplo, em um jogo nós precisamos de uma representação de um Jogador. Então, o que
Precisamos para representar um jogador? Nós precisamos de algum dado, por exemplo, a posição do Jogador. Algun atributos que o jogador talvez tenha, como
Velocidade. Podemos ter um modelo 3D que representa o Jogador na tela. Todos esses dados necessitam ser guardados em algum lugar. Nós poderiamos até 
Criar variáveis para tudo isso ao invés de Classes:

    int PlayerX, PlayerY;
    int PlayerSpeed = 2;

    int PlayerX1, PlayerY1;
    int PlayerSpeed1 = 5;

Isso ao longo do tempo se torna chato e desorganizado.

Ao inves de ficar criando varias variaveis, nós podemos simplicar ao usar uma classe. Por exemplo, criar uma Classe Player que terá todos os dados sobre esse 
Jogador.

Classes são basicamente SyntaxSugar para facilitar a nossa vida e organizar o nosso código.

*/

/*

    Quando você cria uma nova Classe, você tem a opção de decidir o quão visivel os dados nesse Classe realmente é. Por padrão, uma Classe faz tudo Privado. 
    O que quer dizer que somente funções dentro dessa Classe podem acessar essas variáveis. Caso eu queira que outras funções sejam capazes de visualizar e acessar
    esses dados dentro da Classe, é faze-la Pública. 

*/

class Player { // O nome da Classe tem que ser único. Isso pq Classes são Tipos/ Types.

public: // Quando eu declaro essa Classe Pública, eu deixo essas variáveis visiveis para outras funções
    int x, y;
    int speed;

    void Move(int xa, int ya) { // Funções dentro de Classes, são chamadas de Metodos/ Methods

        x += xa * speed;

        y += ya * speed;
    }

}; 

// void Move(Player& player, int xa, int ya) {


//     player.x += xa * player.speed;
//     player.y += ya * player.speed;
// }

int main(void) {

    Player jogador; // Variáveis que são criadas com Tipos Classes são chamadas de objetos. E um novo Object Variable é chamado de Instance. 
                   // O que fizemos aqui foi Instanciar um Objeto Player pq nós criamos uma novo instancia desse Player Type.

    jogador.x = 5; 

    printf("%d\n", jogador.x);

    jogador.Move(1, -1);


    return 0;
}