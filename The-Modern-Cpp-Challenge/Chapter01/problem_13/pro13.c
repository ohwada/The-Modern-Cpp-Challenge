/**
 * pro13.cpp
 * Computing the value of Pi 
 * 2022-06-01 K.OHWADA
 */


// gcc pro13.c  

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>


/**
 *  compute_pi
 */
double compute_pi()
{

  const int SAMPLES = 1000000;

   int hit = 0;

   for (int i = 0; i<SAMPLES; i++)
   {
    double x = (double)random() /( (double)RAND_MAX + 1.0);

    double y = (double)random() /( (double)RAND_MAX + 1.0);

      if (y <= sqrt(1 - pow(x, 2))) hit += 1;
   }

   return 4.0 * hit / SAMPLES;
}


/**
 * main
 */
int main()
{
      struct timespec ts;
     timespec_get(&ts, TIME_UTC);
    srandom(ts.tv_nsec ^ ts.tv_sec);

   for(int  j = 0; j < 10; j++)
   {
      printf("%.3f \n", compute_pi() );
   }

    return 0;
}



