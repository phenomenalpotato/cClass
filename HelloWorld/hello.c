/* This is a commentary! */

#include <stdio.h> // Incluindo um Header

int main(void) {

    /* Iniciando a variável ret para armazenar o retorno da função printf() */
    int ret = 0;
    int ret1 = 0;

    /* Armazenando o retorno da função printf() na variável ret */ 
    ret = printf("Hello World!\n");
    /* Existe uma série de maneiras de um formato para que os próximos argumentos sejam substituidos/ impressos do texto que o printf() vai imprimir. Para o inteiro, 
    normalmente usa o %d (Format Specifier) de decimal  */ 
    printf("Retorno da função printf() anterior: %d\n",ret); // O retorno dela, printf() nese caso foi 13, pq existem 13 "letras" na string.
    /* No caso da função printf() acima nós não usamos o retorno dela. Então, o retorno dela foi pro limbo. */
    
    printf("----------------------------------------\n");

    printf("papobinario.com.br\n");

    printf("----------------------------------------\n");

    /* Nessa função printf() os %d serão substituido em ordem de como foram expostos. Por exemplo, o primeiro %d será substituido pelo o valor de ret1, o 
    segundo %d será substituido pelo o valor 10, o terceiro por 0xa que é 10 em decimal, e o quarto será pelo o valor ASCII que é o correlacionado da letra
    A maiuscula em ASCII.  */
    printf("%d - %d - %d - %d\n", ret1, 10, 0xa, 'A');

    /* Usando o %x para substituir/ imprimir os valores na ordem em hexadecimal */

    printf("%x - %x - %x - %x\n", ret1, 10, 0xa, 'A');

    /* Usando o %c irá imprimir o caracter que tem correspondente esse valor seguinte */

    printf("%c %c %c\n", 'A', 65, 0x41);

    return 0;
}