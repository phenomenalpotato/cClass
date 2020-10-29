#include <stdio.h>
#include <curl/curl.h>

int main(void) {

    CURL *curl;

    CURLcode res;

    char error[CURL_ERROR_SIZE]; // Size of the buffer

    curl_global_init(CURL_GLOBAL_ALL);

    curl = curl_easy_init();

    if(curl) {


        curl_easy_setopt(curl, CURLOPT_URL, "https://eu-west-1-api.cloudconformity.com/v1");

        curl_easy_setopt(curl, CURLOPT_VERBOSE, 1L); // First thing to do when your libcurl program does not perform the way you want
                                                    // It will give with a better explanation about error or even if it is successful
                                                   // The program will run more verbose

        curl_easy_setopt(curl, CURLOPT_ERRORBUFFER, error); // Error Buffer. With this, i could give more message to an error or if something goes wrong

        curl_easy_setopt(curl, CURLOPT_HEADER, 1L); // Basicaly tells the libcurl to include the response header in the data 

        // Perform the request, res will get the return code

        res = curl_easy_perform(curl);

        // Check for errors 

            if(res != CURLE_OK) {

                fprintf(stderr, "curl_easy_perform() failed: %s ==> %s\n", curl_easy_strerror(res), error); // Giving more information about the error with 
                                                                                                           // the error buffer
                
            }

        curl_easy_cleanup(curl);

    }

    curl_global_cleanup();

    return 0;
}