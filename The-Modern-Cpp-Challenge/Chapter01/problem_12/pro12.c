/**
 * pro12.cpp
 * Largest Collatz sequence
 * 2022-06-01 K.OHWADA
 */

// gcc pro12.c

// TODO:
// error on limit: 10000 

#include <stdio.h>


// large array
const  unsigned long BUFSIZE = 100000000UL;
int cache[BUFSIZE];


/**
 *  longest_collatz_uncached(
 */
void longest_collatz_uncached(unsigned long long const limit, unsigned long long *num, long *len)
{
   long length = 0;
   unsigned long long number = 0;

   for (unsigned long long i = 2; i <= limit; i++)
   {
      unsigned long long n = i;
      long steps = 0;
      while (n != 1)
      {
         if ((n % 2) == 0)
            n = n / 2;
         else
            n = n * 3 + 1;
         steps++;
      } // while

      if (steps > length)
      {
         length = steps;
         number = i;
      }
   }// for

*num = number, 
* len = length;

   return;
}


/**
 * longest_collatz
 */
void  longest_collatz(unsigned long long const limit, unsigned long long *num, long *len)
{
    long length = 0;
    unsigned long long number = 0;


    const int SIZE = limit + 1;
    for(int j=0; j<SIZE; j++)
    {
        cache[j] = 0;
    }


   for (unsigned long long i = 2; i <= limit; i++) 
   {
      unsigned long long n = i;
      long steps = 0;
      while (n != 1 && n >= i) 
      {
         if ((n % 2) == 0) 
            n = n / 2;
         else 
            n = n * 3 + 1;
         steps++;
      } // while

      cache[i] = steps + cache[n];

      if (cache[i] > length) 
      {
         length = cache[i];
         number = i;
      }
   } // for

*num = number, 
* len = length;

   return ;
}


/**
 * struct test_data
 */
struct test_data
   {
      unsigned long long limit;
      unsigned long long start;
      long steps;
   };


/**
 * struct test_data data
 */
 const int SIZE = 8;
   struct test_data data[SIZE] = 
   {
      { 10ULL, 9ULL, 19 },
      { 100ULL, 97ULL, 118 },
      { 1000ULL, 871ULL, 178 },
      { 10000ULL, 6171ULL, 263 },
      { 100000ULL, 77031ULL, 350 },
      { 1000000ULL, 837799ULL, 524 },
      { 10000000ULL, 8400511ULL, 685 },
      { 100000000ULL, 63728127ULL, 949 }
   };


/**
 * main
 */
int main()
{
   
unsigned long long number;
long length;


for(int i=0; i<SIZE; i++)
{
   struct test_data d = data[i] ;

    unsigned long long limit = d.limit;
    unsigned long long start = d.start;
    long steps =  d.steps;

    // printf("%d : %llu, %llu, %ld \n", i, limit, start, steps);

    longest_collatz(limit, &number, &length);

    // printf("number : %llu \n", number );
    // printf("length : %ld \n", length);

      if (number != start || length != steps) {
        printf( "error on limit: %llu \n \n", limit );
      } else {
            printf("less than: %llu starting number: %llu sequence length: %ld \n", limit, number, length );
    }
   } // for

    return 0;
}

// less than: 10 starting number: 9 sequence length: 19 
// less than: 100 starting number: 97 sequence length: 118
// less than: 1000 starting number: 871 sequence length: 178 
// error on limit: 10000


