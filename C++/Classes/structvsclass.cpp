#include <iostream>

/* 
    Basicamente, só há uma diferença entre uma Struct e uma Classe em C++, e é em relação a visibilidade. Por padrão, os membros de uma Classe são 
    Privados. Só que em uma Struct, os membros são por padrão já Públicos.

    Uma das principais razões na qual Structs existem em C++ é por causa de querer manter a sua compatibilidade com C. Pq, C não tem Classes, só Structs.

    Podemos preferir a utilização entre Structs VS Classes no seu código, caso queira, assim:

    Se tenho poucos dados que necessitam ser agrupados, por exemplo duas variáveis float:

    struct vect2 {

        float x, y;

    };

    Posso preferir por uma Struct já que não preciso ter muitos dados agrupados. Mas caso tenha, funções, variáveis e muitas outras funcionalidades, 
    poderia preferir usar uma classe.

 */

struct Player {

    int x;
    int y;

    int speed;

    void Move(int xa, int ya) {

        x += xa * speed;

        y += ya * speed;
    }

};

class Math {

    int Tone;
    int Ttwo;

    void Add(const Math& other) {

        Tone += other.Tone;
        Ttwo += other.Ttwo;
    }

};

int main(void) {

    Player jogador;

    jogador.x = 10;

    printf("%d\n", jogador.x);

    jogador.Move(1, -1);

    return 0;
}