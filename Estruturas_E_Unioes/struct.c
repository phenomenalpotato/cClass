#include <stdio.h>
#include <string.h>

#define PONTO printf("-------------------------------------------------\n");

struct st2 {

    int a;
    int b;
    int c;

};

struct st
{
    unsigned char id[5];
    unsigned int num;
    struct st2 s2;
};


int main(void) {

    struct st s; // struct st é o tipo da variável s

    s.id[3] = 3;
    s.id[2] = 0x90;
    s.num = 2017;

    printf("s.id[3]: %d\n", s.id[3]);
    printf("s.num: %d\n", s.num);
    printf("s.id[2]: %d\n", s.id[2]);

    memset(&s ,0 ,sizeof(struct st)); // Usando a função memset para zerar um espaço de memória. Primeiro passar o endereço de onde quer ir, depois o que a gente quer escrever lá?
                                     // Nesse caso queremos escrever o valor 0 lá. A quantidade de 0 seguintes nos próximos espaços.  
    
    PONTO

    printf("s.id[3]: %d\n", s.id[3]);
    printf("s.num: %d\n", s.num);
    printf("s.id[2]: %d\n", s.id[2]);

    PONTO

    printf("sizeof(struct s): %ld bytes\n", sizeof(struct st)); // Tamanho da struct st

    return 0;

}