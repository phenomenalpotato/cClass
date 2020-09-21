/* O programa acaba quando todos os comodos da casa forem verificados;

fazer um programa que verifique que em comodos com determinados metros quadrados, deve ter mais ou menos lampadas de 60 watts, por exemplo:

Se maior que 5 ou menor igual a 15 == 2 lampadas de 60 watts; 

#include <stdio.h>
#include <math.h>

#define PONTO printf("---------------------------------------------------------------\n");

int i = 0; // quantidade = 0;

float CalculoArea(float lar, float comp) {

    float area, resul;

    area = lar * comp;

    resul = ceil(lar * comp);

    // printf("Area na função CalculoArea %f\n", area);

    return area;
}

float lampada(int comodo, float metragem) {

    int watts;

    watts = comodo * metragem; // Vai retornar quantos watts esse comodo vai precisar

    // printf("Metragem na função Lampada: %f\n", metragem);
    // printf("Watts na função Lampada: %d\n", watts);

    return watts;
}

int main(void) {

     typedef struct {

         int tipo;
         float largura;
         float comprim;

     } comodo;

    comodo casa[0];

    int array;

    printf("Quantos comodos a casa tem: ");
    scanf("%d", &array);

    // casa[array];

    do {

        int LampadasComodos, quantidade = 0;

        printf("Qual o comprimento do cômodo: ");
        scanf("%f", &casa[i].comprim);

        printf("Qual a largura do cômodo: ");
        scanf("%f", &casa[i].largura);
    
        // lampada(casa[i].tipo, CalculoArea(casa[i].largura, casa[i].comprim));

        LampadasComodos = lampada(casa[i].tipo, CalculoArea(casa[i].largura, casa[i].comprim));

        // LampadasComodos = lampada(casa[i].tipo, 60);

        // printf("%d\n", LampadasComodos);

        // printf("%f Area na função Main", CalculoArea(casa[i].largura, casa[i].comprim));

        if (LampadasComodos == 60) {

        quantidade = quantidade + 1;

        }

        printf("O número total de lâmpadas de 60 watts para esse cômodo é: %d\n", quantidade);

        i--;

        PONTO
    
    } while (array <= 0);

    // printf("O número total de lâmpadas de 60 watts para esse cômodo é: %d\n", quantidade);
    

    return 0;
} */
=========================================================================================================
/* Fazer um programa que verifique que em uma casa com alguns cômodos com determinados metros quadrados, deve ter mais ou menos lâmpadas de 60 watts */

#include <stdio.h>
#include <math.h>

#define PONTO printf("---------------------------------------------------------------\n");

int i = 0; // quantidade = 0;

float CalculoArea(float lar, float comp) {

    float area, resul;

    area = lar * comp;

    resul = ceil(lar * comp);

    // printf("Area na função CalculoArea %f\n", area);

    return area;
}

float lampada(int comodo, float metros) {

    int watts;

    watts = comodo * metros; // Vai retornar quantas lampadas esse comodo vai precisar

    // printf("Metragem na função Lampada: %f\n", metragem);
    // printf("Watts na função Lampada: %d\n", watts);

    return watts;
}

int main(void) {

     typedef struct {

         int tipo;
         float largura;
         float comprim;

     } comodo;

    int comodos, contador;

    float lampadas, metragem;

    printf("Quantos comodos a casa tem: ");
    scanf("%d", &comodos);

    PONTO

    comodo casa[comodos];

    contador = comodos;

    // do {

    //     int LampadasComodos, quantidade = 0;

    //     printf("Qual o comprimento do cômodo: ");
    //     scanf("%f", &casa[i].comprim);

    //     printf("Qual a largura do cômodo: ");
    //     scanf("%f", &casa[i].largura);
    
    //     // lampada(casa[i].tipo, CalculoArea(casa[i].largura, casa[i].comprim));

    //     LampadasComodos = lampada(casa[i].tipo, CalculoArea(casa[i].largura, casa[i].comprim));

    //     // LampadasComodos = lampada(casa[i].tipo, 60);

    //     // printf("%d\n", LampadasComodos);

    //     // printf("%f Area na função Main", CalculoArea(casa[i].largura, casa[i].comprim));

    //     if (LampadasComodos == 60) {

    //     quantidade = quantidade + 1;

    //     }

    //     printf("O número total de lâmpadas de 60 watts para esse cômodo é: %d\n", quantidade);

    //     i--;

    //     PONTO
    
    // } while (array <= 0);

    // printf("O número total de lâmpadas de 60 watts para esse cômodo é: %d\n", quantidade);

while (contador > 0) {
        
        int LampadasComodos, quantidade = 0;

        printf("Qual é o tamanho do array agora: [%d]\n", contador);

        printf("Qual o comprimento do cômodo: ");
        scanf("%f", &casa[contador].comprim);

        printf("Qual a largura do cômodo: ");
        scanf("%f", &casa[contador].largura);

        metragem = CalculoArea(casa[contador].largura, casa[contador].comprim); // Chamando a função CalculoArea()

        lampadas = lampada(comodos, metragem);

        if(metragem >= 1 && metragem <= 5) {

            printf("Uma casa com %.0fm² de %d Cômodos necessita de [%.0f] Lâmpadas de 60 watts\n", metragem, comodos, lampadas);

        }

        contador--;

        PONTO


    }

    return 0;
}

=========================================================================================================


/* Exercicio por enquanto descontinuado...! */