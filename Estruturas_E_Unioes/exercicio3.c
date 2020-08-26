/* Faça um programa que controle os estoques de 5 produtos em 5 armazens de um supermercado */

                                                        /* Produto 0 | Produto 1 | Produto 2 | Produto 3 | Produto 4 |
                                                Armazem 0    150     |     0     |    100    |    150    |    200    |
                                                Armazem 1    200     |    300    |    230    |    100    |    90     |
                                                Aramzem 2    250     |    300    |     0     |    200    |    150    |
                                                Armazem 3    300     |    100    |    90     |    450    |     0     |
                                                Armazem 4    350     |    300    |    400    |    250    |    200    |
                                                         ------------------------------------------------------------- 
                                                        */

#include <stdio.h>

#define PONTO printf("----------------------------------------------------------------------\n");

int main(void) {

    int supermercado[5][5] = {{150, 0, 100, 150, 200}, {200, 300, 230, 100, 90}, {250, 300, 0, 200, 150}, {300, 100, 90, 450, 0}, {350, 300, 400, 250, 200}};

    int produto;

    for (int i = 0; i <= 4; i++) {

        for (int j = 0; j <= 4; j++) {

            PONTO

            printf("No Armazem [%d] ainda há [%d] unidades do produto [%d]\n", i, supermercado[i][j] ,j); 

            printf("Qual será a quantidade retirada do estoque no Armazem [%d]: ", i);
            scanf("%d", &produto);

            supermercado[i][j] = supermercado[i][j] - produto;

            printf("Produto no estoque nesse momento: %d\n", supermercado[i][j]);            

                if(supermercado[i][j] == 0) { // Se o produto em estoque for 0, não existe produto disponivel para vender/ entregar

                    fprintf(stderr, "Não existe mais produto no estoque!\n");

            }
                else if (supermercado[i][j] < 0) { // Se não é possível vender/ entregar produtos que náo tenham mais unidades disponiveis

                    fprintf(stderr, "O estoque ficou negativo! O pedido não foi gravado!\n");
                
                }

            while (supermercado[i][j] > 0) { // Enquanto o produto em estoque for > 0, o loop continuará até que seja menor

            PONTO

            printf("No Armazem [%d] ainda há [%d] unidades do produto [%d]\n", i, supermercado[i][j],j); 

            printf("Qual será a quantidade retirada do estoque no Armazem [%d]: ", i);
            scanf("%d", &produto);

            supermercado[i][j] = supermercado[i][j] - produto;

            }
        }
    }

    return 0;
}