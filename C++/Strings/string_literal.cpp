#include <iostream>
#include <cstring> // Para usar a função strlen
#include <stdlib.h>

// String Literal é basicamente, uma serie de Caracteres que estão entre duas aspas "". String Literals são SEMPRE ARAMZENADAS EM PARTE READ-ONLY DA MEMÓRIA! 

int main(void) {

    "Teste"; // Isso é um String Literal. Aqui também terá o NUll Termination Character \0

    const char name[7] = "Tes\0te";

    const char *name1 = "Test"; // Não podemos mudar essa String, pois esse Ponteiro está apontando para um localização na memória que está String está que é somente 
                              // Read-Only

    char name2[] = "Ola";

    printf("%s\n", name2);

    name2[2] = 'e'; // Caso queiramos mudar a String posteriormente

    printf("%s\n", name2);

    printf("%s\n", name);

    printf("%ld\n", strlen(name));

    const wchar_t *name3 = L"Testando"; // wide carachter. Necessita de um L antes da aspas duplas. É 16 bits por Caracter 

    const char16_t *name4 = u"Testei"; // Necessita de um u antes das "". É 16 bits por Caracter. É usado para UTF-16

    const char32_t *name5 = U"Testado"; // Necessita de um U antes das "". 32 bits por Caracter. É usado para UTF-32

    using namespace std::string_literals; // Isso nos dara um monte de funções 

    std::string name6 = "Eai"s + "Hey"; // Para fazer um append de uma String no final de outra adicionando um s no final da primeira String. 
                                       // s é um Operator funtion 

    const char *example = R"(Line1
    Line2
    Line3
    Line4)"; // O R significa ignorar o Escape Characters. É usado para Multi Line Strings

    printf("%s\n", example);

    return 0;
}