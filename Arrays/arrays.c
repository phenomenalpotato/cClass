#include <stdio.h>
#include <limits.h>

int main(void) {

    // int myGrades[5];

    // myGrades[0] = 12;

    int myGrades[] = {INT_MAX, 12, 42, INT_MAX, 23, 52, 51};

    printf("Primeiro elemento do array myGrades: %d\n", myGrades[0]);
    printf("O terceiro elemento do array myGrades: %d\n", myGrades[2]);
    printf("O Quarto elemento do array myGrades: %d\n", myGrades[3]);

    return 0;

}