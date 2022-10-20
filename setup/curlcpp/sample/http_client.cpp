/**
 * http_client.cpp
 * 2022-06-01 K.OHWADA
 */

// reference : https://github.com/JosephP91/curlcpp

#include <iostream>
#include <string>
#include "curl_easy.h"

using namespace std;

using curl::curl_easy;
using curl::curl_easy_exception;
using curl::curlcpp_traceback;

// prototype
bool http_client(char* url);


/**
 *  http_client
 */
bool http_client(char* url)
{
    curl_easy easy;

    bool is_error = false;

    easy.add<CURLOPT_URL>(url);
    easy.add<CURLOPT_FOLLOWLOCATION>(1L);

    try {
        easy.perform();
    } catch (curl_easy_exception &error) {
        std::cerr<<error.what() <<std::endl;
        is_error = true;
    }

    return !is_error;
}


/**
 *  main
 */
int main(int argc, char *argv[])
{

	char* url = (char *)"http://example.com";

    http_client(url);

    return 0;
}

  // <title> Example Domain </title>
