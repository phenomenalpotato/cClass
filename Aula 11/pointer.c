#include <stdio.h>

/* Fazendo uma função que recebe um ponteiro s 
Declarou a variável no void imprime(char *s)
Ao invés de colocar int imprime, está void imprime pq essa função não tem retorno. Por exemplo: return = 0*/

void imprime(char *s) { 

    while (*s) // MESMA COISA QUE COLOCAR while(*s != '0'). Enquanto *s (Valor que está no ponteiro) é diferente de 0 (mesma coisa que o 0x00 ). 
               // Se for 0 o while() vai parar
 
    putchar(*s++); // putchar() imprime só um caracter na tela

}

int main(void) {

    int a [] = {2017, 2018, 2019};

    int r = 2017;

    int *ponteiro; // Para declarar um ponteiro, vc deve colocar o *antes

    char *s = "Texto"; // *s é um ponteiro, que aponta para uma area de memória alocada que tem essa sequencia de bytes

    ponteiro = &r; // A variável está recebendo o endereço em memória de i

    char l[] = "fernando";

    char *t = "fernando";

    char u[] = {0x66, 0x65, 0x72, 0x6e, 0x61, 0x6e, 0x64, 0x6f, '\n',0x00};

for (unsigned i = 0; i < 3 ; i++) {

    printf("Valor atual do Array a é: %d\n", a[i]);
}

printf("O endereço de memória de a é: %p\n", a);


printf("O endereço da variável r (int) em memória é: %p\n", &r);

printf("O endereço da variável r (int) em memória usando ponteiro é: %p\n", ponteiro);

printf("O valor de r (int) usando ponteiro é: %d\n", *ponteiro); // Pegando o valor do ponteiro, que está naquele endereço de memória 

printf("O valor da variável l (char) é: %s\n", l);

printf("O valor da variável t (char) é: %s\n", t);

printf("O valor da variável u (char) é: %s\n", u);

imprime(u);

    return 0;


}