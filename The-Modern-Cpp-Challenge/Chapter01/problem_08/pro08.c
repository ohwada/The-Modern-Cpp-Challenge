/**
 * pro08.cpp
 * Armstrong numbers  
 * 2022-06-01 K.OHWADA
 */

// gcc pro08.c

#include <stdio.h>
#include <stdbool.h>
#include <sys/time.h>


/**
 * print_narcissistics
 */
void print_narcissistics(bool const printResults)
{
   for (int a = 1; a <= 9; a++)
   {
      for (int b = 0; b <= 9; b++)
      {
         for (int c = 0; c <= 9; c++)
         {
            int abc = a * 100 + b * 10 + c;
            int arm = a * a * a + b * b * b + c * c * c;
            if (abc == arm)
            {
               if (printResults) printf("%d \n", arm);
            }
         } // for c
      } // for b
   } // for a
}


/**
 * calc_duration
 */
double calc_duration( struct timespec start_time, struct timespec end_time)
{
    unsigned int  sec = end_time.tv_sec - start_time.tv_sec;
    int nsec = end_time.tv_nsec - start_time.tv_nsec;
    double dsec = (double)sec
        + (double)nsec / (1000 * 1000 * 1000);
    double msec = 1000 * dsec;
    return msec;
}


/**
 * main
 */
int main()
{
   struct timespec start_time, end_time;

    printf("print_narcissistics true \n");
   print_narcissistics(true);
  
    printf("print_narcissistics false \n");
    clock_gettime(CLOCK_REALTIME, &start_time);
    for (int i = 0; i < 10000; ++i)
    {
        print_narcissistics(false);
    }
    clock_gettime(CLOCK_REALTIME, &end_time);

    double msec = calc_duration(start_time, end_time);
    printf("%.3f msec \n", msec);

    return 0; 
}


//153 
// 370 
// 31.419 msec 




