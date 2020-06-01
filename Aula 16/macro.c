#include <stdio.h> // include é uma diretiva de Pré-Processamento que irá incluir um arquivo/ header no programa. 
#include "f.h" // Inluindo um arquivo que está no mesmo diretório do programa. 

#define MSG "Mensagem Padrão" // Para utilizar uma Macro, usamos a diretiva de Pré-Processamento define.
                             // Nós iremos usar uma Macro quando precisamos usar algo que se repita no decorrer do programa constantemente. 
#define SIZ 1024
#define QUAD(x) (x*x) // Isso não é uma função, seria uma MACRO que tem caracteristicas/ age como se fosse uma função. No final das contas, essa MACRO irá, 
                     // quando, for chamada irá substituir com o valor que tem nessa parte determinada do programa
#define MAX(x,y) (x > y ? x : y)
#define MAX3(x, y, z) (MAX(MAX(x, y), MAX(y, z)))
#define DEBUG 
#define VAR(x) printf("A variável "#x" tem valor: %d\n", x); // #x irá pegar o nome da variável

int main(void) {

    char buff[SIZ] = { '\0' };

    // printf("Digite Algo: ");
    // scanf("%s", buff);

    // printf("Você digitou: %s\n", buff);

    // imprime("Oie"); 
    // printf("%s\n", MSG);

    int contador = 90;

    printf("O quadrado de 8 é: %d\n", QUAD(8));
    printf("Entre os dois números qual é o maior: %d\n", MAX(3, 9));
    printf("Entre os três números qual é o maior: %d\n", MAX3(3, 41, 9));

    #ifdef DEBUG 
    printf("Em: %s, Às: %s, Estou na linha: %d\n", __DATE__, __TIME__, __LINE__); // __LINE__ é uma macro que já está definida, ela irá retornar a linha onde ela
                                                            // foi escrita no programa. Nesse caso,Ela irá retornar 28, pois, 28 é o número da linha que ela está
    VAR(contador);
    #endif

    void *p = (void*)0; // Definição de NULO em C

    if (p == NULL)
        printf("p é nulo\n");

    return 0;
}