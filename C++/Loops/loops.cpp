#include <iostream>

#define PONTO printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");

int main(void) {

    // for(int i = 0; i < 5; i++) {

    //     printf("Hi!\n");

    // }

    // bool condition = true;

    // for(int i = 0; condition; ) {

    //     printf("Hi!\n");

    //     i++;

    //     if(!(i < 5)) { // ! operador irá reverter a logica da operação. Se a expressão, nesse caso i < 5 for True ao usar o operador ! irá reverter o resultado
    //                   // dele para False 

    //         condition = false;

    //     }


    // }

    //     int i = 0;

    //     while (i < 5) {

    //         printf("Hey!\n");

    //         i++;

    //     }


    for (int i = 0; i < 5; i++) {

        if(i % 2 == 0) { // Aqui ele avaliará se essa expressão for True com a keyword continue sendo executada dentro do if(), o programa irá diretamente para
                        // a interation, nesse caso, i++ e somará mais 1. E não irá para o printf() até que a expressão seja False

                continue;
        }

        printf("Hi! Com Continue\n");

        std::cout << i <<std::endl;

    }
    
    PONTO

    for(int i = 0; i < 5; i++) {

        if(i < 2) { // Uma vez que o break for executado, o programa sai completamente do loop for()

            break;

        }

        printf("Hey! Com Break\n");

        printf("%d\n", i);

    }

    return 0; // Quando o return for executado, no caso da função main() o programa acabará. Mas caso ele seja executado em outra função, então quando ele for 
             // executado, essa função irá sair da função. Se a sua função deve retornar um valor, você deve retornar um valor com o Return.
}