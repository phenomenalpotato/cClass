// Declaração de uma variável é para informar para o compilador as seguintes informações: nome da variável, tipo da variável e valor inicial se tiver algum
// Por exemplo, declaração dá ao compilador detalhes sobre as propriedades de uma variável. 
// Onde, definição de uma variável diz onde uma variável será armazenada. Por exemplo, memória para a variável é alocada durante a definição da variável.

// Na linguagem C, definição e declaração para a variável acontece ao mesmo tempo. Por exemplo, não há diferença entre declaração e definição. 
// Por exemplo considere a seguinte declaração:

// -> int a;

// Aqui, a informação como o nome da variável: a, e o tipo do dado: int, na qual é enviado para o compilador na qual será armazenada em uma estrutura de dados 
// Conhecida como "Symbol Table". 

// Suponhamos se nós queremos somente declarar variáveis e não definirmos elas, por exemplo, nós não queremos alocar memória para elas, então a seguinte declaração
// Pode ser usada:

// -> extern int a;

// Neste exemplo, somente a informação sobre a variável é enviada e nenhuma alocação de memória é feita. A informação acima fala para o compilador que a variável
// a é declarada agora enquanto memória para ela será definida mais tarde no mesmo arquivo ou em um arquivo diferente.

// Declaração de função provêm ao compilador o nome da função, o número e o tipo de argumento que ela tem e o tipo de retorno dela. Por exemplo:

// -> int add(int x, int y);

// Aqui, uma função com o nome add é declarada com 2 argumentos do tipo int e o retorno do tipo int. Memória não será alocada nesse estágio.
// Definição dessa função é usada para alocar memmória para a função. Por exemplo:

// -> int add(int x, int y) {

// ->    return (x + y);
// -> }

// Durante a definição dessa função, a memória para essa função add será alocada. A variável ou a função pode ser declarada qualquer número de vezes, mas 
// Só pode ser definida uma vez.

// Os pontos acima são resumidos abaixo:

// Declaração:
 // - Uma variável ou função pode ser declarada qualquer quantidade de vezes.
 // - Memória não será alocada durante declaração;
 // - int f(int x); 
 // - Acima é uma declaração de uma função. Essa declaração é somente para informar ao compilador que uma função chamada f com um tipo de retorno e 
 //  - argumento como int será usada nessa função.

// Definição:
 // - Uma variável ou função pode ser definida somente uma vez.
 // - Memória será alocada.
 // - int f(int a) {
 //       return a;
 // }
 // - O sistema irá alocar memória ao ver a seguinte definição da função. 

#include <stdio.h>

extern int a;

int main(void) {    

    int  a = 12;

    printf("%d\n", a);

    return 0;
}
