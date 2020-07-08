#include <stdio.h>

#define PONTO printf("-----------------------------------------------------------------\n");

int gvariavelGlobal = 2; // Declarando uma variável global que pode ser visivel para outras funções. Diferente de uma variável Local que somente estará 
                   // Visivel para a função em que foi declarada. o g no começo na variável global (gvariavelGlobal) serve mais para identificar 
                   // Que essa é uma variável global. Mas isso não é necessário, não vai dar erro caso eu execute sem colocar ela. 
                   // E durante a execução do código essa variável age como uma variável Estatica, em que se trata de que quando operarem ela, ela pode mudar de valor


int main(void) {

    void test(void);

    void funct(void);

    printf("Imprimindo o valor da variável global gvariavelGlobal (int) na função main(): %d\n", gvariavelGlobal);

    PONTO

    test();

    test();

    funct();

    return 0;
}

void test(void) {

    int variavelLocalAutomatica = 2; // Essa variável ela é somente Local (Variável Local Automática), ela é só Local pq, só está visivel para a função test(),
                                    // e ela é Automatica pq, cada vez que chamamos a função test() ela é recriada/ recomeça.

    variavelLocalAutomatica *= 2; // Multiplicando a variável por 2. Mesma coisa que variavelLocalAutomatica = variavelLocalAutomatica * 2

    static int variavelLocalEstatica = 3; // A principal diferença entre uma Variável Local Automatica e uma Variável Local Estatica, 
                                   // é que no caso da Estatica, essa variável não perde o valor dela a cada vez que a função é chamada

    variavelLocalEstatica = variavelLocalEstatica * 2;

    printf("Esse é o valor da Variável Local (variavelLocalAutomatica) da função test(): %d\n", variavelLocalAutomatica);

    PONTO

    printf("Esse é o valor da variável Local (variavelLocalEstatica) da função test(): %d\n", variavelLocalEstatica);

    gvariavelGlobal *= 2;

    PONTO

    printf("Imprimindo o valor da variável global gvariavelGlobal (int) na função test(): %d\n", gvariavelGlobal);

    PONTO
       
}


void funct(void) {

    int variavelLocalEstatica = 2;

    // printf("%d\n", variavelLocalEstatica);

    printf("Imprimindo o valor da variável global gvariavelGlobal (int) na função funct(): %d\n", gvariavelGlobal);
} 


