/**
 * pro07.cpp
 * Amicable numbers  
 * 2022-06-01 K.OHWADA
 */

// gcc pro07.c

#include <stdio.h>
#include <math.h>


/**
 *  sum_proper_divisors
 */
int sum_proper_divisors(int const number)
{
   int result = 1;
   for (int i = 2; i <= sqrt(number); i++)
   {
      if (number%i == 0)
      {
         result += (i == (number / i)) ? i : (i + number / i);
      }
   }

   return result;
}


/**
 * print_amicables
 */
void print_amicables(int const limit)
{
   for (int number = 4; number < limit; ++number)
   {
      int sum1 = sum_proper_divisors(number);

      if (sum1 < limit)
      {
         int sum2 = sum_proper_divisors(sum1);

         if (sum2 == number && number != sum1)
         {
           printf("%d, %d \n", number, sum1);
         }
      } // for
   }
}


/**
 *  print_amicables_once
 */
void print_amicables_once(int const limit)
{
   
   for (int number = 4; number < limit; ++number)
   {
      int sum1 = sum_proper_divisors(number);

      if (sum1 < limit)
      {
         int sum2 = sum_proper_divisors(sum1);

         if (sum2 == number && number != sum1)
         {
                printf("%d, %d \n", number, sum1);
         }
      }
   } // for
}


/**
 * main
 */
int main()
{
   print_amicables(1000000);
   print_amicables_once(1000000);
    return 0;
}

// 220, 284 
// 284, 220

