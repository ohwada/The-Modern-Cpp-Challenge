/**
 * pro11.cpp
 * Converting numerical values to Roman 
 * 2022-06-01 K.OHWADA
 */

// gcc pro11.c

#include <stdio.h>
#include <string.h>


/**
 * struct roman_pair
 */
struct roman_pair {       
    int num;
    char roman_num[20];    
};


/**
 * omans
 */
const int SIZE = 13;
struct roman_pair romans[SIZE] = {
{ 1000, "M" },
{ 900, "CM" },
{ 500, "D" },
{ 400, "CD" },
{ 100, "C" },
{ 90, "XC" },
{ 50, "L" },
{ 40, "XL" },
{ 10, "X" },
{ 9, "IX" },
{ 5, "V" },
{ 4, "IV" },
{ 1, "I" }
};


/**
 * main
 */
void to_roman(char *result, unsigned int value)
{
    const char NUL = '\0';

    const int BUFSIZE = 100;
   char buf[BUFSIZE];
    buf[0] = NUL;

   for (int i=0; i<SIZE; i++)
   {

        struct roman_pair roman = romans[i];
        int num = roman.num;
        char *roman_num = roman.roman_num;

      while (value >= num)
      {
        strcat(buf, roman_num);
         value -= num;
      } // while
   } // for

    strcpy(result, buf);
   return;
}


/**
 * main
 */
int main()
{
 const int BUFSIZE = 100;
char result[BUFSIZE];

   for(int i = 1; i <= 100; ++i) 
   {
        to_roman(result, i);
        printf("%d: %s \n", i, result); 
   }

   int number = 0;
   printf("number:");
   scanf("%d", &number);

         to_roman(result, number);

   printf("%d: %s \n", number, result );

    return 0;
}

// 1: I 
// 2: II 
// 3: III 
// 4: IV 
//5: V 

