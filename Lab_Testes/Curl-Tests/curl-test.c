#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <curl/curl.h>

struct memory{ // This is just so we have some data to that we can pass into the callback. So we can get it from the function in to the callback. 
              // And after transfer is done we know what to do with the data

    char *memory;
    size_t size;
};

static size_t writecallback(char *contents, size_t size, size_t nmemb, void *userp) { // What we tell curl to use instead, Curl usually use a write function internally to send the data somewhere when wants to store it
                               // It write, so we can set up another write function. Libcurl will send all the data to this function 

    // fprintf(stderr, "Got %d bytes\n", (int)size * nmemb); 
    
    /* We would like to store the data in memory. And not only print. */

    size_t realsize = size * nmemb;

    struct memory *mem = (struct memory *) userp;

    char *ptr = realloc(mem->memory, mem->size + realsize + 1);

        if(ptr == NULL) {

            perror("Something went wrong");
            
            return 0;

        }

    mem->memory = ptr;

    memcpy(&mem->memory[mem->size], contents, realsize);

    mem->size += realsize;

    mem->memory[mem->size] = 0;

    return realsize;

    //return size * nmemb; // Returning the number of bytes we took care of. If we don't do this the libcurl thinks is something wrong 

}


int main(void) {

    CURL *curl_handle; // You will do transfer using this. It's just a handle to transfers to operate 

    /* The handle is the return code from a curl_easy_init or curl_easy_duphandle call */

    CURLcode res; // Declaring a variabel to be able to return the code from perform

    struct memory chunk;

    chunk.memory = NULL;

    chunk.size = 0;

    curl_global_init(CURL_GLOBAL_ALL); // Before doing anything with the functions provided by the curl API, we need to initialize it. You will pass as an argument that say
                                      // What particular part to initialize or rather to avoid to initialize. CURL_GLOBAL_ALL is not thread safe. Make sure 
                                     // You do this before you do anything else. This most is to initialize 3rd parties libraries.

    curl_handle = curl_easy_init(); // Start a libcurl easy session and Creating the handle 
    
    if(curl_handle) { // Let's check if has some problem, for example, if it's out of memory. It will return a NULL

    curl_easy_setopt(curl_handle, CURLOPT_URL, "https://eu-west-1-api.cloudconformity.com/v1"); // We got a handle back, so what do we do to create a transfer? We set a URL. 
                                                                        // That's the only thing we realy need to set on an handle to make sure 
                                                                        // That the transfer is going to happen. So we ask Curl to get this URL for us. 
                                                                        // That's the only thing we ask here. 
                                                                        // We did not ask curl to put this output anywhere, so will send to stdout directly
                                                                        // By default.

/*curl_easy_setopt is used to tell libcurl how to behave. By setting the appropriate options, the application can change libcurl's behavior */

/* Options set with this function call are valid for all forthcoming trasfers performed using this handle. The options are not in any way reset between
trasfers, so if you want subsequent transfers with diferrent options, you must change them between the transfers. */

    curl_easy_setopt(curl_handle, CURLOPT_WRITEFUNCTION, writecallback); // Teling curl to use this write callback.
                                                                        // Now when it does this transfer for "https://example.com/" it will call this 
                                                                        // writecallback function for all data that it receives from it.
                                                                        // It will call the function over and over until all the data is transfered 
                                                                    
    curl_easy_setopt(curl_handle, CURLOPT_WRITEDATA, &chunk); 

    res = curl_easy_perform(curl_handle); // Perform the transfer. That transfer that we especified with the curl_handler in the argument.
                                        // So, we want to return the result in this variable

    /* It will perform the transfer synchronous, from the start to end*/

            if(res != CURLE_OK) { 

                fprintf(stderr, "curl_easy_perform() returned %s\n", curl_easy_strerror(res)); // let's return an error string and not a error number
                                                                                            // It will convert the error code here to a string and will return it

                curl_easy_cleanup(curl_handle); // The easy API is part of libcurl is focused in single transfer and it makes transfer for synchronously. 
                                    // We will always clean up because we created an handler. One clean up for each init 

            }

            else { // If theres no error

                char *messageF = NULL; // If you want to search/ look for an word

                printf("We got %d bytes to our Callback in memory location %p\n", (int)chunk.size, chunk.memory);

                messageF = strstr(chunk.memory, "message");

                if(messageF) {

                    printf("Found 'message' at the file %ld\n", (messageF - chunk.memory));
                }
                
            }

    free(chunk.memory);

    }

    curl_easy_cleanup(curl_handle); // Closing the handle

    curl_global_cleanup(); // And when we are done with our operations, we do this

    return 0;
}