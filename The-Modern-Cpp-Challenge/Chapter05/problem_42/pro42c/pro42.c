/**
 * pro42.c
 * Day and week of the year
 * 2022-06-01 K.OHWADA
 */

// gcc pro42.c

#include <stdio.h>
#include <math.h>
#include "time_util.h"



/**
 * calendar_week
 */
unsigned int calendar_week(int const y, unsigned int const m, unsigned int const d)
{

   
   if(m < 1 || m > 12 || d < 1 || d > 31) {
        return 0;
    }


unsigned int days = day_of_year(y, m, d);

 unsigned int weeks = (unsigned int)ceil( (double)days/7.0);

    return weeks;

}


/**
 * main
 */
int main()
{

   unsigned int y = 0, m = 0, d = 0;

    printf("Year:");
    scanf("%d", &y);    
    printf("Month:");
    scanf("%d", &m);
   printf("Day:");
    scanf("%d", &d);

   printf("Calendar week: %d \n", calendar_week(y, m, d) );

   printf("Day of year: %d \n", day_of_year(y, m, d) );

    return 0;
}
