// Union:

// As estrturas do tipo Union permite armazenar diferentes tipos de dados no mesmo local de memória;
// A grande vantagem dessa estrutura esta na organização da memória, e no seu reaproveitamento, isto é,
// as Unions fornecem uma maneira eficiente de usar o mesmo local de memória para vários propósitos;

// Definindo uma Union, você deve usar a instrução union da mesma forma que definiu uma estrutura;
// A instrução union define um novo tipo de dados com mais de um membro para o seu programa;
// O formato da declaração da union é o seguinte:

// union [Nome_do_Tipo_Union] {
//    Tipo_de_dado1 variavel1;
//    Tipo_de_dado2 variavel2;
//    ...
//    Tipo_de_dadoN variavelN;
// } [uma ou mais variaveis Union];  

// *Nome_do_Tipo_Union é opcional. Não é necessário definir.

// No exemplo a seguir, a variável dado é uma union e poderá ser do tipo int, float ou cadeia de caracteres.
// Depende do valor que será movido.

#include <stdio.h>
#include <string.h>
int main( ) { 
  union {
   int i;
   float f;
   char str[20];
  } dado;
 
  dado.i = 10; /* union sera do tipo inteiro */
  printf( "Sou inteiro : %d\n", dado.i);
  dado.f = 34.5; /* union sera do tipo float */
  printf( "Sou real : %f\n", dado.f);
  strcpy(dado.str,"Sou String"); /* union sera do tipo "String" */
  printf( "Sou string : %s\n", dado.str);

   return 0;
}

// Enum:

// As Enumerações, são um tipo definido pelo o usuário, utilizando-se de uma lista de indentificadores.
// Os identificadores desta lista, se assemelham a constantes;

// As enumerations definem um novo tipo de variável e limita desde logo os valores;

// O formato da declaração da enum é o seguinte:

// enum [Nome_do_Tipo_enum] {
//    identificador1,
//    identificador2;
//    ...
//    identificadorN;
// } [uma ou mais variaveis enum];  

// Exemplo: enum {black, blue, green, cyan, red, purple, yellow, white}cores;

// A maneira mais simples de interpretar uma enumeration é imagina-la como uma matriz de apenas uma linha.
// Temos o nome da linha e temos as várias células na linha. Cada constante enumerada 
// (muitas vezes chamado de enumerador) tem um valor inteiro (caso não seja especificado ele começa do 0);

    // Exemplo:

    // ---------------------------------------------------------
    // | black | blue | green | cyan | purple | yellow | white |
    // |     0 |    1 |     2 |    3 |      4 |      5 |     6 |
    // ---------------------------------------------------------

#include <stdio.h>
 int main(void)
 {
    enum { black, blue, green, cyan, red, purple, yellow, white} cores;

    cores = red;

     switch(cores) {
         case 0:
           printf("Cor preto \n");
           break;
         case 1:
           printf("Cor azul \n");
           break;
         case 2:
           printf("Cor verde \n");
           break;
         case 3:
         printf("Cor ciano \n");
           break;
         case 4:
           printf("Cor vermelho \n");
           break;
         case 5:
           printf("Cor roxo \n");
           break;
         case 6:
           printf("Cor amarelo \n");
           break;
         default:
           printf("Cor branco \n");
     }
  return  0 ;

 }

 int main(void) {

    enum num{zero, one, two};

    printf("%d, %d, %d\n", zero, one, two);

    enum num numeros = two;

    int te = one;

    printf("%d, %d\n", numeros, te);

    return 0;
}

 // Enum permite que o usuário possa definir o valor tipo;

 // enum {quadrado=5, retangulo, triangulo=27, circulo, elipse}forma;

 // Os valores dos identificadores serão: 

    // ---------------------------------------------------------
    // | Quadrado | Retangulo | Triangulo | Circulo | Elipse |
    // |        5 |         6 |        27 |      28 |     29 |
    // ---------------------------------------------------------