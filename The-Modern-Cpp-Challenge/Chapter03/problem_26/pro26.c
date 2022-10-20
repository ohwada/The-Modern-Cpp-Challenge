 /**
 * pro26.c
 *  Joining strings together separated by a delimiter 
 * 2022-06-01 K.OHWADA
 */

// gcc pro26.c

#include <stdio.h>
#include <stdbool.h>
#include <string.h>


const char NUL = '\0';

 /**
 * join_strings
 */
void join_strings(char *result, int num, int size, const char text[num][size], const char *separator)
{
    if(size == 0){
        result[0] = NUL;
        return;
    }

    for(int i=0; i<num; i++)
    {
        strcat(result, text[i] );
        strcat(result, separator);
    } // for

}


/**
 *  print_text
 */
void print_text(int num, int size, const char text[num][size])
{
    printf("\n{ ");
    for (int i = 0; i < num; i++) {
        printf("%s, ", text[i]);
    }
    printf("}\n");
}


 /**
 * main
 */
int main()
{
     const int LEN = 20;
    const char TEXT1[][LEN] = { "this","is","an","example" };
    const char TEXT2[][LEN] = { "example" };
    const char TEXT3[][LEN] = {};

int size1 =  sizeof(TEXT1[0]);
int num1 = sizeof(TEXT1) / size1;

int size2 =  sizeof(TEXT2[0]);
int num2 = sizeof(TEXT2) / size2;

int size3 =  sizeof(TEXT3[0]);
int num3 = sizeof(TEXT3) / size3;


const int BUFSIZE = 100;
char buf1[BUFSIZE];
char buf2[BUFSIZE];
char buf3[BUFSIZE];

    for(int j=0; j<BUFSIZE; j++){
        buf1[j] = NUL;
        buf2[j] = NUL;
        buf3[j] = NUL;
    }

// case1 
    print_text(num1, size1, TEXT1);
    join_strings(buf1, num1, size1, TEXT1, " ");
    printf("%s \n", buf1);


// case2 
    print_text(num2, size2, TEXT2);
    join_strings(buf2, num2, size2, TEXT2, " ");
    printf("%s \n", buf2);


// case3 
    print_text(num3, size3, TEXT3);
  printf("num: %d \n", num3);
    join_strings(buf3, num3, size3, TEXT3, " ");
    printf("|%s| \n", buf3);

    return 0;
}


// { this, is, an, example, }
// this is an example  

