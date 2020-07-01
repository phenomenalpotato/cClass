#include <stdio.h>

int main(void) {

    int a = 359;

if(-1 == a && a < 400){ // Essa avaliação será validada, caso seja verdadeiro, o bloco abaixo será executado (int chave = 3; printf("Chave: %d\n", chave))
                        // e nenhum outro bloco( else if() e o else{} ) será executado
    int chave = 3;

    printf("Chave: %d\n", chave);
}

else if (359 == a) { // Do contrário será executado este bloco(printf("A variável a (int) é: %d\n", a); ) E da mesma forma, se essa avaliação for verdadeira,
                    // não será executado os blocos seguintes (else {}) 

    printf("A variável a (int) é: %d\n", a);

}

else if (a < 500){

    puts("A variável a (int) é menor que 500");

}

else { // E do contrário aos de cima, esse bloco será o executado.

printf("A avaliação do if() deu FALSE\n");

puts("Puts...");

}

printf("O Valor da variável a é: %d\n", a);

    return 0;

}