/**
 * pro01.c
 * Sum of naturals divisible by 3 and 5
 * 2022-06-01 K.OHWADA
 */

// gcc pro01.c

#include <stdio.h>


/**
 * main
 */
int main()
{
    unsigned int limit;
    printf("Upper limit:");
    scanf("%d", &limit);

   unsigned long long sum = 0;
   for (unsigned int i = 3; i < limit; ++i)
   {
      if (i % 3 == 0 || i % 5 == 0)
         sum += i;
   }

    printf("sum=%llu \n", sum);

    return 0;
}

