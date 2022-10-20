 /**
 * pro25.c
 * Capitalizing an article title  
 * 2022-06-01 K.OHWADA
 */

// gcc pro25.c

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>


 /**
 * capitalize
 */
void capitalize(char *result, char *TEXT)
{

   bool newWord = true;
    int len = strlen(TEXT);

   for (int i=0; i<len; i++)
   {
        char ch = TEXT[i];
      newWord = newWord || ispunct(ch) || isspace(ch);
      if (isalpha(ch))
      {
         if (newWord)
         {
            result[i] = toupper(ch);
            newWord = false;
         }
         else
            result[i] = tolower(ch);
      }
      else result[i] = ch;
   }

}


 /**
 * main
 */
int main()
{
    const char NUL = '\0';

   const char TEXT1[] = "THIS IS an ExamplE, should wORk!";
   const char EXPECT1[] = "This Is An Example, Should Work!";

    const char TEXT2[] = "the c++ challenger";
    const char EXPECT2[] = "The C++ Challenger";

   const char TEXT3[] = "THIS IS an ExamplE, should wORk!";
    const char EXPECT3[] = "This Is An Example, Should Work!";

    const int BUFSIZE = 100;
    char buf1[BUFSIZE];
    char buf2[BUFSIZE];
    char buf3[BUFSIZE];

    for(int i=0; i<BUFSIZE; i++){
        buf1[i] = NUL;
        buf2[i] = NUL;
        buf3[i] = NUL;
    }

// case 1
    printf("%s \n", TEXT1);

    capitalize(buf1, (char *)TEXT1);

    if( strcmp(buf1, EXPECT1) != 0 ){
        printf("unmatch expect \n");
    }

    printf("%s \n", buf1);


// case 2
    printf("%s \n", TEXT2);

    capitalize(buf2, (char *)TEXT2);

    if( strcmp(buf2, EXPECT2) != 0 ){
        printf("unmatch expect \n");
    }

    printf("%s \n", buf2);

// case 3
    printf("%s \n", TEXT3);

    capitalize(buf3, (char *)TEXT3);

    if( strcmp(buf3, EXPECT3) != 0 ){
        printf("unmatch expect: \n");
    }

    printf("%s \n", buf3);

    return 0;
}

// THIS IS an ExamplE, should wORk! 
// This Is An Example, Should Work! 
// the c++ challenger 
// The C++ Challenger 


