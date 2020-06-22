#include <stdio.h>

int main(void) {

    float vproduto;

    float dproduto;

    printf("Qual é o valor do produto R$: ");
    scanf("%e", &vproduto);

    if(vproduto <= 2000) {

        dproduto = vproduto - (vproduto * 0.10);

        printf("O valor do produto com 10%% de desconto é: %.2f\n", dproduto);
    }

    else if(vproduto > 2000 && vproduto <= 3000) {

        dproduto = vproduto - (vproduto * 0.05);

        printf("O valor do produto com 5%% de desconto é: %.2f\n", dproduto);

    }

    else if(vproduto > 3000 && vproduto <= 5000) {

        dproduto = vproduto - (vproduto * 0.03);

        printf("O valor do produto com 3%% de desconto é: %.2f\n", dproduto);

    }

    else {

        dproduto = vproduto - (vproduto * 0.02);

        printf("O valor do produto com 2%% de desconto é: %.2f\n", dproduto);

    }

    return 0;
}