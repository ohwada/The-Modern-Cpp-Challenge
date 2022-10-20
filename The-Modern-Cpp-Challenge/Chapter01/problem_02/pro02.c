/**
 *  pro02.c
 * Greatest Common Divisor 
 * 2022-06-01 K.OHWADA
 */

// gcc pro02.c -o bin/pro02

#include <stdio.h>


/**
 *  gcd
 */
unsigned int gcd(unsigned int const a, unsigned int const b)
{
    // printf("a=%d, b=%d \n", a, b);
    return b == 0 ? a : gcd(b,  a % b);
}


/**
 *  main
 */
int main()
{
   printf("Input numbers:");

    unsigned int a, b;
    scanf("%d", &a);
    scanf("%d", &b);

   printf("gcd(%d,%d)=%d \n", a, b, gcd(a, b));

    return 0;
 }
