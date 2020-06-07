#include <stdio.h>

extern int a;

int main(int argc, char *argv[]) {

    register int a = 10;

    printf("%d\n", a);

    return 0;
}