#include <stdio.h>

void funcao(void) {

    // static int i = 0; // Não confundir com uma CONSTANTE, essa variável ainda pode mudar no decorrer do programa. Quando faço um variável com o static
                        // Essa variável ela não é reinicializada e nem redeclarada, ela continua com o valor que estava anteriormente na ultima vez que essa 
                       // Função foi executada.

    // auto int i = 0; //<- Isso seria uma variável automatica que ao contrário de uma estatica, irá ser redeclarada e reinicializada toda a vez que a função
                      // Onde está for chamada. Pode se usar a maneira mais simples de declarar ela: int i = 0;

    register int i; // Aqui com o register, eu estou pedindo para o compilador colocar essa variável i não em um lugar em memória. Mas sim, colocar ela em 
                   // Um registrador.

    for (i=0; i < 3; ++i) {

        printf("%d\n", i);

    }
    
}

int main(void) {

    funcao();
    funcao();
    funcao();

    return 0;
}