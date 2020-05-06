#include <stdio.h>

int main(void) {

    int a = 2; // 10 <- 2 em binario

    int b = 3; // 11 <- em binario

    int c = 0;

    int d = 0b1000; // <- 8



    // 0 Falso
    // Qualquer coisa diferente de 0 é verdadeiro

    printf("O resultado usando (AND) & é %d\n", a & b); // Só um & significa que é um AND bit-a-bit

    printf("O resultado usando | (OU) é: %d\n", a | b); // Só um | significa que é um OR bit-a-bit 

    printf("O resultado usando o ^ (OU exclusivo XOR) é: %d\n", a ^ b); // O ^ significa que é um XOR bit-a-bit

    printf("O resultado usando o ~ (Negação) é: %d\n", ~c);

    printf("O resultado usando o << (Shift Right) ou >> (Shift Left) é: %d\n", d << 1); // Empurrar os digitos para a esquerda (<<) ou
                                                                                        // Empurrar os digitos para a direita (>>)

    return 0;

}