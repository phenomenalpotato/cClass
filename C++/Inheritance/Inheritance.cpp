#include <iostream>

// Inheritance/ Herança nos permite ter uma Alta Hierarquia de Classes na qual são relacionadas umas as outras. Em outras palavras, nos permite ter uma Classe
// Base na qual contêm funcionalidades comuns e então nos permite ramificar essa Classe e fazer Sub-Classes apartir dessa Classe Pai Inicial. 
// O pq disso ser algo muito útil é que nos permite evitar Código Duplicado. 

// Código Duplicado é quando temos o mesmo código multiplas vezes, talvez fazendo algumas minimas mudanças ou ações, mais na maioria das vezes 
// É exatamente a mesma coisa. Podemos colocar todo esse Código que temos em um numero N de Classes
// Em comum em uma Classe Base, dessa maneira não precisamos ficar repetindo códigos. 

// Isso seria como criar um Template Base (Classe Base) que outras Classes irão Herdar! É uma maneira para estendermos as funcionalidades de uma Classe
// Já existe e adicionarmos mais funcionalidades

// Polimorfismo, é basicamente a ideia de ter multiplos Tipos para um único Tipo. 
// Por exemplo, Player não é somente o Tipo Player (Player jogador) mas também é uma Entidade (class Player). Isso significa, que podemos utilizar um 
// Player em qualquer lugar que queiramos usar uma Entidade. Isso faz sentido, pois, a Classe Player tem as mesmas coisas que a Classe Entity e ainda mais um
// Pouco.

class Entity { // Classe Base chamada Entity. Todas as Classes que criarmos e herdar dessa Classe terá esse atributos.

public:
    
    float X, Y;

void Move(float xa, float ya) {

    X += xa;

    Y += ya;

}

};

class Player : public Entity { // Player será uma Sub-Classe Da Classe Entity. A Classe Player não somente tem o tipo Player também tem o tipo Entity. 
                              // Agora a Classe Player tem tudo que a Classe Pai Entity tem. TUDO QUE NÃO ESTÁ COMO PRIVATE NA CLASSE ENTITY, AGORA ESTÁ
                              // VISIVEL PARA A CLASSE PLAYER!

public:
    
    const char *Name;

//     float X, Y;                      |
//                                      |
// void Move(float xa, float ya) {      |
//                                      |       <- Mesmo Código que aparece na Classe Entity. Código Duplicado
//     X += xa;                         |
//                                      |
//     Y += ya;                         |

// }    

    void PrintName(void) {

        printf("%s\n", Name);
    }

};

int main(void) {

    Player jogador;

    printf("%ld bytes, %ld bytes\n", sizeof(jogador.X), sizeof(jogador.Y));

    printf("Tamanho da Classe Player: %ld bytes\n", sizeof(Player));

    printf("Tamanho da Classe Entity: %ld bytes\n", sizeof(Entity));

    jogador.Name = "Dog";

    jogador.PrintName();

    jogador.Move(5, 5);

    return 0;
}