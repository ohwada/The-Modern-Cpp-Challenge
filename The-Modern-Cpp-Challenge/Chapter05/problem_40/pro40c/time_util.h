#pragma once
/**
 * time_util.h
 * 2022-06-01 K.OHWADA
 */


#include <time.h>

time_t get_unixtime
   (int const y, unsigned int const m, unsigned int const d);
unsigned int day_of_year(int const y, unsigned int const m, unsigned int const d);


/**
 * get_unixtime
 */
time_t get_unixtime
   (int const y, unsigned int const m, unsigned int const d)
{

    if ( (y < 1900)||(m < 1)||(m > 12)||(d<1)||(d> 31) ){
        return 0;
    }

    struct tm tm1 = { 0 };

	tm1.tm_year = y - 1900;
	tm1.tm_mon = m - 1;
	tm1.tm_mday = d;

	tm1.tm_hour = 0;
	tm1.tm_min = 0;
	tm1.tm_sec = 0;

	// convert tm structure to time_t type
	time_t t = mktime(&tm1);
    return t;
}


/**
 * day_of_year
 */
unsigned int day_of_year(int const y, unsigned int const m, unsigned int const d)
{

if(m < 1 || m > 12 || d < 1 || d > 31) {
    return 0;
}

    time_t unixtime = get_unixtime
   (y, m, d);

 if (unixtime == 0){
    return 0;
}

struct tm date;
date = *localtime(&unixtime); 

return date.tm_yday + 1;

}

