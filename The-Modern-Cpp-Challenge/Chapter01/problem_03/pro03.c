/**
 * pro03.cpp
 * Least Common Multiple
 * 2022-06-01 K.OHWADA
 */

// gcc pro03.c -o bin/pro03

#include <stdio.h>


/**
 * gcd
 */
int gcd(int const a, int const b)
{
   return b == 0 ? a : gcd(b, a % b);
}


/**
 * lcm
 */
int lcm(int const a, int const b)
{
   int h = gcd(a, b);
   return h ? (a * (b / h)) : 0;
}


/**
 * main
 */
int main()
{
 printf("Input numbers:");

    unsigned int a, b;
    scanf("%d", &a);
    scanf("%d", &b);

    printf("lcm(%d,%d)=%d \n", a, b, lcm(a, b));

    return 0;
}
