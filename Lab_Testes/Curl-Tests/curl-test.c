#include <stdio.h>
#include <curl/curl.h>

int main(void) {

    CURL *curl_handle; // You will do transfer using this. It's just a handle to transfers to operate 

    CURLcode res; // Declaring a variabel to be able to return the code from perform

    curl_global_init(CURL_GLOBAL_ALL); // Before doing anything with the functions provided by the curl API, we need to initialize it. You will pass as an argument that say
                                      // What particular part to initialize or rather to avoid to initialize. CURL_GLOBAL_ALL is not thread safe. Make sure 
                                      // You do this before you do anything else. This most is to initialize 3rd parties libraries.

    curl_handle = curl_easy_init(); // Creating the handle 
    
    if(curl_handle) { // Let's check if has some problem, for example, if it's out of memory. It will return a NULL

    curl_easy_setopt(curl_handle, CURLOPT_URL, "https://example.com/"); // We got a handle back, so what do we do to create a transfer? We set a URL. 
                                                                        // That's the only thing we realy need to set on an handle to make sure 
                                                                        // That the transfer is going to happen. So we ask Curl to get this URL for us. 
                                                                        // That's the only thing we ask here. 
                                                                        // We did not ask curl to put this output anywhere, so will send to stdout directly
                                                                        // By default.

    res = curl_easy_perform(curl_handle); // Perform the transfer. That transfer that we especified with the curl_handler in the argument.
                                        // So, we want to return the result in this variable

    /* It will perform the transfer synchronous, from the start to end*/

        if(res != CURLE_OK) { 

            fprintf(stderr, "curl_easy_perform() returned %s\n", curl_easy_strerror(res)); // let's return an error string and not a error number
                                                                                         // It will convert the error code here to a string and will return it

            curl_easy_cleanup(curl_handle); // The easy API is part of libcurl is focused in single transfer and it makes transfer for synchronously. 
                                  // We will always clean up because we created an handler. One clean up for each init 

        }

    }

    curl_easy_cleanup(curl_handle); // Closing the handle

    curl_global_cleanup(); // And when we are done with our operations, we do this

    return 0;
}

/*

#include <stdio.h>
#include <string.h>
#include <curl/curl.h>

int main(int argc, char *argv[]){

  CURL *curl;
  CURLcode res;
  curl = curl_easy_init();
  if(curl) {    
    curl_easy_setopt(curl, CURLOPT_CUSTOMREQUEST, "POST");
    curl_easy_setopt(curl, CURLOPT_URL, "https://events.sendpulse.com/events/id");
    curl_easy_setopt(curl, CURLOPT_FOLLOWLOCATION, 1L);
    curl_easy_setopt(curl, CURLOPT_DEFAULT_PROTOCOL, "https");
    struct curl_slist *headers = NULL;
    headers = curl_slist_append(headers, "Content-Type: text/plain");
    curl_easy_setopt(curl, CURLOPT_HTTPHEADER, headers);
        const char *data = "{
\n  \"email\": \"alo@gmail.com\",
\n  \"phone\": \"+123456789\",
\n  \"user_id\": 121212,
\n  \"event_date\": \"2019-12-29\"
\n}";
    curl_easy_setopt(curl, CURLOPT_POSTFIELDS, data);
    res = curl_easy_perform(curl);
  }
  curl_easy_cleanup(curl);
  return (int)res;
}

*/