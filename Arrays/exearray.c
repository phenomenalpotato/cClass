#include <stdio.h>

int main(void){

    int arra[] = {1001, 10, 220, 1, 0};

    int i;
    int cont = 0;
    int cont2 = 0;

    for(i = 0; i < 5; i++) {

        if(arra[i] > 100) {
            printf("%d é maior que 100\n", arra[i]);

            cont++;          
    }

        else if(arra[i] == 100)
            printf("%d é igual a 100\n", arra[i]);
        
        else {
            printf("%d é menor que 100\n", arra[i]);

            cont2++;
        }

    }

printf("No array há: %d números maior que 100\n", cont); 

printf("No array há: %d números menor que 100\n", cont2); 

    return 0;
}