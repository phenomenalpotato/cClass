#include <stdio.h>
#include <stdlib.h>

float somaNota(float n1, float n2) {
    
    float nota;

    nota = ((n1 * 4) + (n2 * 6)) / 10;

    return nota;
}

void error(char *msg) {

    fprintf(stderr, "ERROR: %s\n", msg);
    exit(1);

}

int main(void) {

    float nota1 = 0, nota2 = 0, media;
    
    int i;

    for(i = 0; i < 10; i++) {

        printf("Qual a primeria nota do Aluno[%d]: ", i);
        scanf("%f", &nota1);

        printf("Qual a segunda nota do Aluno[%d]: ", i);
        scanf("%f", &nota2);

        media = somaNota(nota1, nota2);

        printf("-------------------------------\n");        
        printf("Nota do Aluno: %.2f\n", media);

        if(media < 0 || media > 10) {

            error("Média menor do que 0 ou maior do 10");

        }

        else if (media >= 0 && media <= 4.9) {

            printf("O conceito do Aluno é D\n");
            printf("-------------------------------\n");    
        
        }

        else if(media >= 5 && media <= 6.9) {

            printf("O conceito do Aluno é C\n");
            printf("-------------------------------\n");
        }

        else if(media >= 7 && media <= 8.9) {
            
            printf("O conceito do Aluno é B\n");
            printf("-------------------------------\n");

        }

        else if(media >= 9 && media <= 10) {

            printf("O conceito do Aluno é A\n");
            printf("-------------------------------\n");
            
        }


    }

    return 0;
}