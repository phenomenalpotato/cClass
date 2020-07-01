#include <stdio.h>
#include <string.h>

#define PONTO printf("---------------------------------------\n");

union st {

    unsigned char id;
    unsigned int num;

};

int main(void) {

    union st s;

    s.num = 2017;

    printf("s.num: %d\n", s.num);

    PONTO

    s.num = 2017;
    s.id = 0xe0;

    printf("s.num: %d\n", s.num);
    printf("s.id: %d\n", s.id);

    // memset(&s, 1, sizeof(union st));

    PONTO

    // printf("s.num: %d\n", s.num);
    // printf("s.id: %d\n", s.num);

    // PONTO

    printf("sizeof(union st): %ld\n", sizeof(union st));


    return 0;
}