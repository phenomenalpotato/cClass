#include <iostream>

void Function(void) {

    static int i = 0;

    i++;

    printf("%d\n", i);
}

int main(void) {

    Function();
    Function();

    // int i = 12;

    // printf("%d\n", i);

    return 0;
}