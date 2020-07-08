#include <stdio.h>
#include <stdlib.h>

void error(char msg[]) {

    fprintf(stderr, "ERRO: %s\n", msg); // usando uma saida de erro padrão
    exit(0);
}

void tchau(void){

    printf("Tchau\n");
    exit(0);

}

int soma(int n1, int n2, int n3) {

    int resul;

    resul = n1 + n2 + n3;

    return resul;

}

int main(void) {

    int num1; //, num2, num3;

    printf("Digite o num1: ");
    scanf("%d", &num1);
    
    // scanf("%d\n%d\n", &num1, &num2, num3); // Irá scannear o input/ o que o user irá escrever  

    // printf("Digite o num2: ");
    // scanf("%d", &num2);

    // tchau();

    // printf("Digite o num3: ");
    // scanf("%d", &num3);

    // printf("Primeiro número: %d -- Segundo número: %d -- Terceiro número: %d\n", num1, num2, num3);

    // printf("Soma de todos os números: %d\n", num1 + num2 + num3);

    // printf("Soma de todos os números usando a função soma é: %d\n", soma(num1, num2, num3));

    // tchau();

    // printf("O endereço da função soma() é: %p\n", soma);

    if (num1 < 1 || num1 < 1900) {

        error("O número é menor que 1 ou 1900");
    }

    printf("Você nasceu em: %d\n", num1);

    return 0;
}