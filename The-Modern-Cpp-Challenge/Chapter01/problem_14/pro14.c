/**
 * pro14.cpp
 * Validating ISBNs
 * 2022-06-01 K.OHWADA
 */

// gcc pro14.c

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>


/**
 * validate_isbn_10
 */
bool validate_isbn_10(char* isbn)
{

    int len = strlen(isbn);
    if( len != 10){
        return false;
    }

    int  w = 10;
    int sum = 0;
    bool is_not_digit = false;

    for(int i=0; i< len; i++)
    {
        int c = isbn[i];
        if( isdigit(c) == 0 ) {
            is_not_digit = true;
            break;
        }
        sum += w-- * (c - '0'); 
    } // for

    if(is_not_digit){
        return false;
    }

    bool valid = ( (sum % 11) == 0)? true: false;
   return valid;
}


/**
 * main
 */
int main()
{
  const char ISBN1[] = "0306406152";
  const char ISBN2[] = "0306406151";

   bool ret1 = validate_isbn_10((char *)ISBN1);
   bool ret2 = validate_isbn_10((char *)ISBN2);

    printf("%s: %d \n", ISBN1, ret1); // true
    printf("%s: %d \n", ISBN2, ret2); // false

    const int BUFSIZE = 20;
    char isbn[BUFSIZE];

   printf("isbn:");
    scanf("%s", isbn);

   printf( "valid: %d \n", validate_isbn_10(isbn) );

    return 0;
}

// 0306406152: 1 
// 0306406151: 0 
