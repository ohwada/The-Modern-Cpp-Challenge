/**
 * pro06.cpp
 * Abundant numbers  
 * 2022-06-01 K.OHWADA
 */

//gcc pro06.c

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
 * print_abundant
 */
void print_abundant(int const limit)
{
   for (int number = 10; number <= limit; ++number)
   {
      int sum = sum_proper_divisors(number);
      if (sum > number)
      {
         printf("%d, abundance=%d \n", number, (sum - number) );
  }
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

   print_abundant(limit);

    return 0;
}


// Upper limit:15
// 12, abundance=4 


