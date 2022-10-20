 /**
 * pro28.c
 *  Longest palindromic substring
 * 2022-06-01 K.OHWADA
 */

// gcc pro28.c

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include "str.h"


 /**
 *  longest_palindrome
 */
void longest_palindrome(char *result, const char *text)
{
   size_t const len = strlen(text);
   size_t longestBegin = 0;
   size_t maxLen = 1;

const int BUFSIZE = len * len;
bool table[BUFSIZE];
for(int i=0; i<BUFSIZE; i++)
{
    table[i] = false;
} // for


   for (size_t i = 0; i < len; i++)
   {
      table[i*len + i] = true;
   } // for

   for (size_t i = 0; i < len - 1; i++)
   {
      if (text[i] == text[i + 1]) 
      {
         table[i*len + i + 1] = true;
         if (maxLen < 2)
         {
            longestBegin = i;
            maxLen = 2;
         }
      }
   } // for

   for (size_t k = 3; k <= len; k++)
   {
      for (size_t i = 0; i < len - k + 1; i++)
      {
         size_t j = i + k - 1;
         if (text[i] == text[j] && table[(i + 1)*len + j - 1])
         {
            table[i*len +j] = true;
            if (maxLen < k)
            {
               longestBegin = i;
               maxLen = k;
            }
         }
      } // for i
   } // for k

substr(result, text, longestBegin, maxLen);

   return;
}


 /**
 * main
 */
int main()
{
    const char NUL = '\0';

    const char* TEXT1 = (char *)"sahararahnide";
    const char* TEXT2 = (char *)"levelone";
    const char* EXPECT1 = (char *)"hararah";
    const char* EXPECT2 = (char *)"level";

    const int BUFSIZE = 100;
    char buf1[BUFSIZE];
    char buf2[BUFSIZE];

    for(int i=0; i<BUFSIZE; i++)
    {
        buf1[i] = NUL;
        buf2[i] = NUL;
    }

// case 1
    longest_palindrome(buf1, TEXT1);

    printf("%s \n", TEXT1);
    printf("%s \n", buf1);

    if ( strcmp(buf1, EXPECT1) != 0) {
        printf("unmatch \n");
    }

// case 2
    longest_palindrome(buf2, TEXT2);

    printf("%s \n", TEXT2);
    printf("%s \n", buf2);

    if ( strcmp(buf2, EXPECT2) != 0) {
        printf("unmatch \n");
    }

  
    return 0;
}

// sahararahnide 
// hararah 
// levelone 
// level

