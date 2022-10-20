 /**
 * pro31.c
 *  // Transforming dates in strings
 * 2022-06-01 K.OHWADA
 */

// gcc pro31.c

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <regex.h>


const char NUL = '\0';


/**
 *  str_replace
 */
bool str_replace(char *result, const char *text, const char *target, const char *replace ) 
{

    const int BUFSIZE = 100;
    char temp[BUFSIZE];
    char work[BUFSIZE];


    // copy for operation
    strcpy(work, text);

    char *p;

    p = strstr(work, target);
    if(p == NULL ){
            return false;
    }

        // insert the string terminator at the detected position
        *p = NUL;

        // move the pointer to the detected position + the number of target characters
        p += strlen(target);

        // save the character string and replace to temp
        strcpy(temp, p);

        // concatenate the first half string and the replacement string
        strcat(work, replace);
        strcat(work, temp);
        strcpy(result, work);

    return true;
}


 /**
 * transform_date
 */
void transform_date(char *result, const char *text)
{

    const char PATTERN[] = "([0-9]{1,2})(.|-|/)([0-9]{1,2})(.|-|/)([0-9]{4})";

    const int SIZE = 10;
    regmatch_t match[SIZE];

    const int LEN = 20;
    char buf[SIZE][LEN];

    for(int i=0; i<SIZE; i++)
    {
        for(int j=0; j<LEN; j++){
            buf[i][j] = NUL;
        } // for j       
    } // for i

    regex_t buffer;

 if ( regcomp(&buffer, PATTERN, REG_EXTENDED) != 0 )
    {
        printf("regcomp failed \n");
        return;
    }

   int ret = regexec(&buffer, text, SIZE, match, 0);

    regfree(&buffer);

    if(ret != 0){
        printf("unmatch \n");
        return;
    }

   for ( int i = 0; i < SIZE; i++ )
    {
        int startIndex = match[i].rm_so; 
        int endIndex = match[i].rm_eo; 
        if ( startIndex == -1 || endIndex == -1 )
        {
            continue;
        }

        // printf("index [start, end] = %d, %d\n", startIndex, endIndex);

        strncpy(buf[i], text + startIndex, endIndex - startIndex);
        // printf("%d: %s \n", i, buf[i]);
    } // for


const int BUFSIZE = 100;
char  replace[BUFSIZE]; 

for(int i=0; i<BUFSIZE; i++)
{
     replace[i] = NUL;
}

strcat( replace, buf[5]);
 strcat( replace, "-");
 strcat( replace, buf[3]);
 strcat( replace, "-");
strcat( replace, buf[1]);

// printf(" replace: %s \n",  replace);

    str_replace(result, text, buf[0],  replace);

}


 /**
 * main
 */
int main()
{

const char* DATE = (char *)"today is 01.12.2017!";

const int BUFSIZE = 100;
char buf[BUFSIZE];

    printf("%s \n", DATE);

    transform_date(buf, DATE);

    printf("%s \n", buf);

    return 0;
}

// today is 01.12.2017! 
// today is 2017-12-01! 

