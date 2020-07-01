#include <stdio.h>

int i; // Variável Global, pode ser acessada por qualquer função.

void funcao(void) {

    int i; // Variável Local, pode ser acessada somente na função funcao()

    for(i=0; i < 3; i++) {

        printf("%d\n", i);

    } 

    
}

int main(void){

    ++i;

    funcao();

    return 0;
}