/**
 * butcoin.c
 * 2022-06-01 K.OHWADA
 */

// Bitcoin exchange rates  
// get Bitcoin exchange rates 
// from https://blockchain.info/ticker


#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <curl/curl.h>
#include "curl_https_client.h"
#include "json_bitcoin_parser.h"
#include "file_util.h"

// prototype
bool save_response(char *data);


/**
 * save_response
 */
bool save_response(char *data)
{
    const size_t BUFSIZE = 512;
    char error[BUFSIZE];

    char* file = "response.json";
    bool ret = file_text_write(file, data, (char *)error);
    if(!ret){
        printf("%s \n", error);
        return false;
    }
    return true;
}


/**
 * main
 */
int main(int argc, char *argv[])
{
    const char NUL = '\0';

    char *url = "https://blockchain.info/ticker";

    bool is_verify = true;


    struct CurlMemory mem;

bool ret = https_client_to_memory((char *)url,  is_verify, 
&mem);
    if(!ret){
        return EXIT_FAILURE;
    }


    size_t size = mem.size;
// printf("size: %zu \n", size);

    char response[size+1];

    strncpy(response, mem.memory, size);
    response[size] = NUL;

    // printf("%s \n", response);

    // save_response(response);

    parse_response(response);

    printf("Bitcoin Exchage Rate \n");
    for(int i=0; i<info_num; i++){
        print_latest( exchange_infos[i] );
    } // for

    return EXIT_SUCCESS;;
}

