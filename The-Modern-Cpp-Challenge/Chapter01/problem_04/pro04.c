/**
 * pro04.cpp
 * Largest prime smaller than given number 
 * 2022-06-01 K.OHWADA
 */

// gcc pro04.c -o bin/pro04

#include <stdio.h>
#include <stdbool.h>


/**
 *  is_prime
 */
bool is_prime(int const num)
{
   if (num <= 3)
   {
      return num > 1;
   }
   else if (num % 2 == 0 || num % 3 == 0)
   {
      return false;
   }
   else
   {
      for (int i = 5; i * i <= num; i += 6)
      {
         if (num % i == 0 || num % (i + 2) == 0)
         {
            return false;
         }
      }

      return true;
   }
}


/**
 * main
 */
int main()
{
   int limit = 0;
   printf("Upper limit:");
   scanf("%d", &limit);

   for (int i = limit; i > 1; i--)
   {
      if (is_prime(i))
      {
         printf("Largest prime:%d \n", i);
         return 0;
      }
   }

    return 0;
}
