// Uma MACRO é um fragmento de código que é dado um nome. Você pode definir uma MACRO em C usando o #define Preprocessor Directive.
// O C Preprocessor não é uma parte do compilador, mas é uma etapa no processo de compilação. O C Preprocessor é somente uma ferramenta de substituição de 
// texto e eles instruem o compilador a fazer o pré processamento requerido antes da compilação. Todos os comandos de pré processamento começam com 
// O simbolo #

// Exemplos de importantes Preprocessors:
    // #define: Substitui uma MACRO Preprocessor 
    // #include: Inseri um particular header de outro arquivo
    // #error: Printa uma mensagem de erro em stderr

// MACRO CONTINUATION (\): 
    // Uma MACRO normalmente deve ficar em uma linha só. O operador de continuaidade de MACRO é usado para continuar uma MACRO que é muito longa para uma linha.

// Conditional Compilation:
    // Em C você pode intruir o Preprocessor se irá incluir um bloco de código ou não. Para fazer isso diretivas condicionais podem ser usadas.
    // Ele é similar a um IF Statement com uma diferença maior:
        // O IF Statement é testado durante o tempo de execução para checar se um bloco de código deve ser executado ou não, enquanto as Conditional Compilation
        // são usadas para incluir (ou pular) um bloco de código no seu programa antes de execução.

#include <stdio.h>

#define integer int
#define STR(str) printf("%s\n", str);

integer main(void) {

integer var = 9;

    char exemplo[] = {"Olá, seja bem-vindo!!"};

    STR(exemplo)

    printf("%d\n", var);

    return 0;
}