 /**
 * pro27.c
 *  Splitting a string into tokens with a list of possible delimiters
 * 2022-06-01 K.OHWADA
 */

// gcc pro27.c

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include "array.h"
#include "str.h"


const char NUL = '\0';


/**
 *  split
 */
void split(char **result, int size, const char *text,  const char *delimiters, int *num)
{
  const int BUFSIZE = 100;
    char buf[BUFSIZE];

    int cnt = 0;
   int pos, prev_pos = 0;

   while ( (pos = find_first_of(text, delimiters, prev_pos) ) != -1)
   {
        if (pos > prev_pos) {
            for(int i=0; i<BUFSIZE; i++){
                buf[i] = NUL;
            } // for
            substr(buf, text, prev_pos, pos - prev_pos);
            if(cnt < size) {
                strcpy(result[cnt], buf);
                cnt ++;
            }
        }
        prev_pos = pos + 1;
   } // while

int length = strlen(text);
   if (prev_pos< length) {
        int len = length - prev_pos;
        substr(buf, text, prev_pos, len);
          if(cnt < size) {
                strcpy(result[cnt], buf);
                cnt ++;
            }
    }

*num = cnt;
   return;
}


/**
 * print_result
 */
void print_result(char **result, int num)
{
    for(int i=0; i<num; i++)
    {
        printf("%s, ", result[i]);
    }
    printf("\n");
}


/**
 * main
 */
int main()
{
    const char* TEXT1 = (char *)"this is a sample";
    const char* TEXT2 =  (char *)"this,is a.sample!!";

    const char* DELI1 =  (char *)" ";
    const char* DELI2 =   (char *)",.! ";


    const int SIZE = 10;
    const int LEN = 20;
    char **result1 =alloc_chars(SIZE, LEN);
    char **result2 =alloc_chars(SIZE, LEN);

    int num1;
    int num2;

// case 1
    printf("%s \n", TEXT1);
    split(result1, SIZE, TEXT1,  DELI1, &num1);
    print_result(result1, num1);
    free(result1); 

// case 2
    printf("\n %s \n", TEXT2);
    split(result2, SIZE, TEXT2,  DELI2, &num2);
    print_result(result2, num2);
    free(result2); 

    return 0;
}


// this is a sample 
// this, is, a, sample, 
// this,is a.sample!! 
// this, is, a, sample,

