/**
 * today.cpp
 * 2022-06-01 K.OHWADA
 */

#include <iostream>
#include "date.h"

using namespace std;


/**
 * main
 */
int main()
{
    auto now = std::chrono::system_clock::now();
     date::year_month_day today = date::floor<date::days>(now);

	cout << today << endl;

    return 0;
}

// 2022-07-10


