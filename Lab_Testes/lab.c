#include <stdio.h>
#include <string.h>
#include <curl/curl.h>

// int main(void) {

//     char str1[16] = {'T', 'E', 'S', 'T', 'E', ' ', 'D', 'E', ' ', 'S', 'T', 'R', 'I', 'N', 'G', '\0'};
//     char str2[16] = {'S', 'T', 'R', 'I', 'N', 'G', ' ', 'D', 'E', ' ', 'T', 'E', 'S', 'T', 'E', '\0'};
//     char str3[16] = {'T', 'E', 'S', 'T', 'E', ' ', 'D', 'E', ' ', 'S', 'T', 'R', 'I', 'N', 'G', '\0'};
  
//     int i, retorno;

//     for(i = 0; str1[i] != '\0' && str2[i] != '\0'; i++) { // Teste do for() fica falso quando uma das strings chegar ao fim, ou pelo return

//         if (str1[i] < str2[i]) {

//             retorno = -1;
//         }
         
//         if (str1[i] > str2[i]) {

//             retorno = 1;
//         }

//         // string iguais
        
//         else {

//             retorno = 0;
//         }

//     }

//     printf("retorno = %d\n", retorno);
    
//     return 0;

// }


// int main(void) {

//     enum num{zero, one, two};

//     printf("%d, %d, %d\n", zero, one, two);

//     enum num numeros = two;

//     int te = one;

//     printf("%d, %d\n", numeros, te);

//     return 0;
// }

// int main(void) {

// for(int i = 0; i < 49; i++) {

//     printf("e");

//     }

// }

int main(void) {

    FILE *fe, *ff;

    int stri;

    fe = fopen("Lambda Exposed.txt", "r");

    ff = fopen("arq.txt", "w+");

    if(fe == NULL || ff == NULL) {

        perror("Error in opening the file");
    }

    do{

        stri = fgetc(fe); 

        if(feof(fe)) {
            
            break;
        }

        //printf("%c", stri);

        fputc(stri, ff);

    } while(1);

    fclose(fe);

    printf("\n");



    return 0;

}