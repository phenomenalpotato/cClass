#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <curl/curl.h>
#include <unistd.h> // For fork
#include <sys/types.h> // For pid_t
#include <sys/wait.h> // For wait

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

// int main(void) {

//     FILE *fe, *ff;

//     int stri;

//     fe = fopen("Lambda Exposed.txt", "r");

//     ff = fopen("arq.txt", "w+");

//     if(fe == NULL || ff == NULL) {

//         perror("Error in opening the file");
//     }

//     do{

//         stri = fgetc(fe); 

//         if(feof(fe)) {
            
//             break;
//         }

//         //printf("%c", stri);

//         fputc(stri, ff);

//     } while(1);

//     fclose(fe);

//     printf("\n");



//     return 0;

// }

// int main(void) {

//     typedef enum {zero, one, two} num;

//      // printf("%d, %d, %d\n", zero, one, two);

//     num numeros = two;

//     int te = one;

//     // printf("%d, %d\n", numeros, te);

//     printf("%d\n", numeros);

//     return 0;
// }

int main(int argc, char *argv[]) {
        
    // CURL *curl;

    // CURLcode res;

    // char error[CURL_ERROR_SIZE]; // Size of the buffer

    // curl_global_init(CURL_GLOBAL_ALL);

    // curl = curl_easy_init();

    // if(curl) {


    //     curl_easy_setopt(curl, CURLOPT_URL, "https://eu-west-1-api.cloudconformity.com/v1");

    //     //curl_easy_setopt(curl, CURLOPT_VERBOSE, 1L); // First thing to do when your libcurl program does not perform the way you want
    //                                                 // It will give with a better explanation about error or even if it is successful
    //                                                // The program will run more verbose

    //     curl_easy_setopt(curl, CURLOPT_ERRORBUFFER, error); // Error Buffer. With this, i could give more message to an error or if something goes wrong

    //     //curl_easy_setopt(curl, CURLOPT_HEADER, 1L); // Basicaly tells the libcurl to include the response header in the data 

    //     // Perform the request, res will get the return code

    //     res = curl_easy_perform(curl);

    //     // Check for errors 

    //         if(res != CURLE_OK) {

    //             fprintf(stderr, "curl_easy_perform() failed: %s ==> %s\n", curl_easy_strerror(res), error); // Giving more information about the error with 
    //                                                                                                        // the error buffer
                
    //         }

    //     curl_easy_cleanup(curl);

    // }

    // curl_global_cleanup();

    //const char *cu = "cat json.txt | jq '.data[].attributes | select(.message == "FAILURE")'";

    //system("cat teste.json | jq '.data[].attributes | select(.status==\"FAILURE\""")'"); // Will execute the jq program

    //printf("asdsadasasd\"Falha\"");


    //Spawn a child to run the program 

    pid_t pid = fork();

    if(pid == 0) { // child process

        //static char *argvi[] = {"cat", "teste.json | jq '.data[].attributes | select(.status==\"FAILURE\""")'", NULL};

        // static char *argvi[] = {"jq", "-n", "{ \"data\": { \"attributes\": { \"type\": \"cloudformation-template\", \"contents\": \"---\\nAWSTemplateFormatVersion: '2010-09-09'\\nResources:\\n  S3Bucket:\\n    Type: AWS::S3::Bucket\\n    Properties:\\n      AccessControl: PublicRead\" } }}"};

        // execv("/usr/bin/jq", argvi);

        static char *argvi[] = {"echo", "{ \"data\": { \"attributes\": { \"type\": \"cloudformation-template\", \"contents\": \"---\\nAWSTemplateFormatVersion: '2010-09-09'\\nResources:\\n  S3Bucket:\\n    Type: AWS::S3::Bucket\\n    Properties:\\n      AccessControl: PublicRead\" } }}"};

        execv("/bin/echo", argvi);

        exit(127); // Only if exec fails

    }

    else { // pid !=; parent process

        waitpid(pid, 0, 0); // wait for child to exit

    }

    return 0;

}