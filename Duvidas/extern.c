// A keyword extern em C aplica-se para variáveis e funções. Basicamente, essa keyword extende a visibilidade de uma variável ou função em todo o programa.

// Quando usamos extern em funções, acaba-se que quando a função é declarada ou definida, a keyword extern é implicitamente assumida. Por exemplo,
// quando escrevemos:

int foo(int targ1, int arg2);

// O compilador trata ela dessa maneira:

extern int foo(int arg1, int arg2);

// Desde que a keyword extern extende a visibilidade da função para todo o programa, a função pode ser usada (chamada) em qualquer lugar nos 
// arquivos do programa, desde que esses arquivos contenham uma declaração da função. (Com a declaração da função em lugar, o compilador sabe que a definição
// da função existe em algum outro lugar e com isso compila o programa).

// Agora, vamos considerar uma variável usando a keyword extern. Para começar, como você declararia uma variável sem defini-la? Você proecisaria fazer algo assim:

extern int var;

// Aqui, uma variável do tipo inteiro chamada var foi declarada (não foi definida ainda, por isso não foi alocado memória para ela). E nós podemos fazer essa 
// declaração quantas vezes queisermos.

// E como você definiria ela?

int var;

// Na linha acima, uma variável var do tipo inteiro foi declarada e definida. Desde que isso é uma definição, a memória para var foi alocada. Agora, vem a
// surpresa. Quando nós declaramos/ definimos uma função, nós vimos que a keyword extern apareceu implicitamente. Mas, esse não é o caso com variáveis.
// Se fosse, memória nunca seria alocada para elas. Por isso, nós precisamos incluir a keyword extern explicitamente quando queremos declarar variáveis
// sem definir elas. Também, como a keyword extern extende a visibilidade para todo o programa, ao usar a keyword extern com uma variável, nós podemos
// usar a variável em qualquer lugar do programa provido desde que incluamos a sua definição em algum lugar.

// Exemplo 1:

int var;

int main(void) {

    var = 10;

    return 0; 
}

// O programa acima compila corretamente. var é definida (e declarada implicitamente) globalmente.

// Exemplo 2:

extern int var;
int main(void) {


    return 0;
}

// O programa compila corretamente. Aqui, var é somente declarada. Note que var nunca é usada então não há problema.

// Exemplo 3:

extern int var;
int main(void) {

    var = 10;

    return 0;
}

// Esse programa irá dar erro na compilação pq var é declarada mas não está definida em nenhum lugar. Essencialmente, var não é alocada com nenhuma memória.
// E o programa está tentando mudar o valor para 10 de uma variável que não existe.

// Exemplo 4:

#include "arquivo.h"

extern int var;
int main(void) {

    var = 10;

    return 0;
}

// Assumindo que "arquivo.h" contêm a definição de var, esse programa compilará corretamente.

// Exemplo 5:

extern int var = 0;

int main(void) {

    var = 10;

    return 0;
}

// Uma surpresa em C. Se uma variável é somente declarada e um inicializador é também provido com essa declaração, então a memória para essa variável 
// será alocada. Em outras palavras, essa variável será considerada definida. Por isso, pelo padrão do C, esse programa irá compilar corretamente.

// Resumindo:
    // 1 - Uma declaração pode ser feito qualquer número de vezes, mas uma definição somente uma vez.
    // 2 - A keyword pode ser usada para extender a visibilidade de variáveis/ funções.
    // 3 - Desde funções são visiveis em todo o programa por padrão, o uso do extern não é necessário em declarações de funções ou definições. O uso dela
    // é implicita.
    // 4 - Quando extern é usado com uma variável, ela é somente declarada.
    // 5 - Com uma exeção, quando uma variável é declarada com uma inicialização, é tomada como a definição da variável também.