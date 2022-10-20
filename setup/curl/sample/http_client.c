/**
 * http_client.c
 * 2022-06-01 K.OHWADA
 */
 

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <curl/curl.h>

// prototype
bool http_client(char *url);


/** 
 * http_client
 */
bool http_client(char *url)
{
    CURL *curl;
    CURLcode res;
    bool ret = false;

  curl = curl_easy_init();
  if(curl) {
    curl_easy_setopt(curl, CURLOPT_URL, url);

    curl_easy_setopt(curl, CURLOPT_FOLLOWLOCATION, 1L);

    res = curl_easy_perform(curl);

     if(res == CURLE_OK){
            ret = true;
     } else{
            fprintf(stderr, "curl_easy_perform() failed: %s\n",
              curl_easy_strerror(res));
    }

    /* always cleanup */
    curl_easy_cleanup(curl);
  } // if curl

    return ret;
}


/** 
 * main
 */
int main(int argc, char *argv[])
{

    char *url = "example.com";

    http_client(url);

    return 0;
}


// <title>Example Domain</title>
