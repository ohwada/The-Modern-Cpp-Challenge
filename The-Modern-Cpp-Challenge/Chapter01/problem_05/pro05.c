/**
 * pro05.cpp
 * Sexy prime pairs 
 * 2022-06-01 K.OHWADA
 */

// gcc pro05.c

#include <stdio.h>
#include <stdbool.h>


/**
 * is_prime
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

   for (int n = 2; n <= limit; n++)
   {
      if (is_prime(n) && is_prime(n + 6))
      {
         printf("%d, %d \n",n, n + 6);
      }
   }

    return 0;
}
