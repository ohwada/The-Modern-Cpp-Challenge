/**
 * pro44.c
 * Monthly calendar
 * 2022-06-01 K.OHWADA
 */

// gcc pro44.c

#include <stdio.h>
#include "calendar.h"


/**
 * print_month_calendar
 */
void print_month_calendar(int const y, unsigned int m)
{

   printf(" Sun Mon Tue Wed Thu Fri Sat \n");

    unsigned int first_day_weekday = day_of_week(y, m, 1) + 1;

    unsigned int  last_day = last_day_of_month(y, m); 


   unsigned int index = 1;
   for (unsigned int day = 1; day < first_day_weekday; ++day, ++index)
   {
    // four spaces
      printf("    ");
   }

   for (unsigned int day = 1; day <= last_day; ++day)
   {
        printf("%4d", day);
        if (index++ % 7 == 0) {
            // Sat
            printf("\n");
        }
   } // for
    printf("\n");
}


/**
 * main
 */
int main()
{
   unsigned int y = 0, m = 0;

    printf("Year:");
    scanf("%d", &y);    
    printf("Month:");
    scanf("%d", &m);

   print_month_calendar(y, m);

    return 0;
}

