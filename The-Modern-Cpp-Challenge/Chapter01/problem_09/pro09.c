/**
 * pro09.cpp
 *  Prime factors of a number   
 * 2022-06-01 K.OHWADA
 */

// gcc pro09.c

#include <stdio.h>
#include <math.h>


/**
 * prime_factors
 */
void prime_factors(int *buf, int bufsize, int n, int *size)
{
   // print the number of 2s that divide n
    int cnt = 0;
   while (n % 2 == 0)
   {
        if(cnt < bufsize) {
            buf[cnt] = 2;
            cnt ++;
        }
        n = n / 2;
   } // for

   for (int i = 3; i <= sqrt(n); i += 2)
   {
      // while i divides n, print i and divide n
      while (n%i == 0)
      {
            if(cnt < bufsize) {
                buf[cnt] = i;
                cnt ++;
            }
            n = n / i;
      } // while
   } // for

   // n is a prime number greater than 2
   if (n > 2) {
       if(cnt < bufsize) {
            buf[cnt] = n;
            cnt ++;
        }
    }

    *size = cnt;
   return;
}


/**
 * main
 */
int main()
{
    const int BUFSIZE = 100;
    int buf[BUFSIZE];

    int number = 0;
    printf("number:");
    scanf("%d", &number);

    int size;
    prime_factors(buf, BUFSIZE, number, &size);

    for(int i=0; i<size; i++)
    {
        printf("%d ", buf[i]);
    }
    printf("\n");

    return 0;
}

// number:60
// 2 2 3 5 

