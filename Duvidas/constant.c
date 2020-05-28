// Uma constante é algo que nunca muda. É como quando vc cria uma constante ela será Read-Only apartir daquele momento. Vc não poderá mudar o valor dela 
// Depois no código.

// Uma vez definida não pode ser modificada mais tarde no código.

// Nós podemos definir uma constante de duas maneiras:
//     - Usando #define <- #define NAME valor // O NAME é chamado de Macro. É o trabalho do PREPROCESSOR (NÃO É O COMPILADOR) de 
//       substituir NAME pelo o valor. Isso acontece da mesma maneira que, por exemplo, um Header é substituido pelo o PREPROCESSOR pelo o seu real conteudo
//       que tem nele.
//     - Usando const 

#include <stdio.h>

#define PI 3.14159 // Não é necessário adicionar ; no final. É uma boa prática quando declarar uma Constante fazer ela MAISCULA. Pois, se mais tarde no código vc 
                  // Declarar outra variavel com o mesmo nome, vc pode declarar essa variável em minusculo e dara certo. Por exemplo, CONSTANTE PI 3.14 e 
                  // VARIAVEL pi = 3.14. Se vc fizer CONSTANTE pi 3.14 e VARIAVEL pi = 3.14 irá dar erro.

#define add(x,y) x+y 

int main(void) {

  printf("%f.5f\n", PI);

  printf("Adição de dois números: %d\n", add(5,5));

  int addi(int a, int b);

  // addi(4, 12);

  printf("Resultado da função addi: %d\n", addi(4,14));

  printf("Hora atual: %s\n", __TIME__); // Macro já pré definida que irá pegar a hora do sistema. Vc não precisa definir ela, ela já vem pré definida
  printf("Data atual: %s\n", __DATE__); // Macro já pré definida que irá pegar a data do sistema. Vc não precisa definir ela, ela já vem pré definida

  // Outra forma de declarar uma CONSTANTE é colocar antes do tipo a palavra const. A maior diferença entre definir uma MACRO com #define e usar const antes 
  // do tipo, é que quando uso uma MACRO essa CONSTANTE será global vc não poderá mudar o valor dela durante o codigo inteiro. 
  // Já no caso da palavra const, vc consegue utilizar essa mesma palavra em outra função se vc definir ela novamente.

  const int var = 23;

  printf("Valor da CONSTANTE: %d\n", var);

  // var = 13; Irá dar erro pq está na mesma função onde declarei a CONSTANTE var;

  return 0;
}

int addi(int a, int b) {

int resultado = a - b;

printf("%f\n", PI);

// int var = 13 Não irá dar erro, pois, estou declarando ela em outra função, onde não declarei ela como CONSTANTE.

// int PI = 12; Irá dar erro; 

  return resultado;

}

