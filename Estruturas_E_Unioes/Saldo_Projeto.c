#include <stdio.h>
#include <stdlib.h>

#define PONTO printf("----------------------------------------------------------------\n");

int i = 9;

char uppercase(char up) {

    if(up >= 'a' && up <= 'z') {

        up = up - 32;

    }

    return up;
}

int main(void) {

    typedef struct {

        int num_projeto;
        float valor;
        float saldo;
        char tipo_despesa;

    } projeto;

    projeto proj[10];


loop_projeto:

    for(; i >= 0;) {

        // ++i;
        
       // printf("ESTÁ AQUI %d\n", i);

        printf(" Qual o Código do projeto: ");
        scanf("%d", &proj[i].num_projeto);

        printf(" Qual o Saldo Inicial do Projeto [%d]: R$", proj[i].num_projeto);
        scanf("%f", &proj[i].saldo);

        printf(" Qual o Valor (Gasto ou Depositado) no Projeto [%d]: R$", proj[i].num_projeto);
        scanf("%f", &proj[i].valor);

        printf(" O Valor será uma [D]espesa ou uma [R]eceita: ");
        scanf("%s", &proj[i].tipo_despesa);

        switch (uppercase(proj[i].tipo_despesa)) {

                    case 'R':
                        
                        PONTO

                        proj[i].saldo = proj[i].valor + proj[i].saldo;

                        printf(" Esse é o Saldo Final do projeto [%d] = R$: [%.2f]\n", proj[i].num_projeto, proj[i].saldo);

                        break;
                    
                    case 'D':

                        PONTO

                        proj[i].saldo = proj[i].saldo - proj[i].valor;

                        printf(" Esse é o Saldo Final do projeto [%d] = R$: [%.2f]\n", proj[i].num_projeto, proj[i].saldo);

                        break;

                    default:

                        PONTO

                        printf(" Você digitou algo errado! Digite [R] para Receita e [D] para Despesa\n Tente executar o programa novamente!\n");

                        exit(1);

                        break;
                    }

                    if(proj[i].saldo <= 0) {

                            --i;

                            PONTO

                            goto loop_projeto;
                            
                    }


        PONTO

        char continuar;

        printf(" Você deseja continuar [S] ou [N]: ");
        scanf("%s", &continuar);

        PONTO

            if (uppercase(continuar) == 'S') {
                
                do {

                printf(" Qual o Valor (Gasto ou Depositado) no Projeto [%d]: R$", proj[i].num_projeto);
                scanf("%f", &proj[i].valor);

                PONTO

                printf(" O Valor será uma [D]espesa ou uma [R]eceita: ");
                scanf("%s", &proj[i].tipo_despesa);

                    switch (uppercase(proj[i].tipo_despesa)) {

                    case 'R':
                        
                        PONTO

                        proj[i].saldo = proj[i].valor + proj[i].saldo;

                        printf(" Esse é o Saldo Final do projeto [%d] = R$: [%.2f]\n", proj[i].num_projeto, proj[i].saldo);

                        break;
                    
                    case 'D':

                        PONTO

                        proj[i].saldo = proj[i].saldo - proj[i].valor;

                        printf(" Esse é o Saldo Final do projeto [%d] = R$: [%.2f]\n", proj[i].num_projeto, proj[i].saldo);

                        break;

                    default:

                        PONTO

                        printf(" Você digitou algo errado! Digite [R] para Receita e [D] para Despesa\n Tente executar o programa novamente!\n");

                        exit(1);

                        break;
                    }

                        }
                        
                            while (proj[i].saldo >= 0);

                            --i;
                }

            else if (uppercase(continuar) == 'N') {
                
                int *contador = NULL;

                contador = &i;

                *contador = i - 1;

                goto loop_projeto;

            }

            
            else {
                
                printf(" Você digitou algo errado! Digite [S] para Continuar o cálculo do saldo do projeto e\n [N] para fazer o cálculo de outros projetos\n Tente executar o programa novamente!\n");

                exit(1);

            }            

        PONTO

    }

    return 0;
}