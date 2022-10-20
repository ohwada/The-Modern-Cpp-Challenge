/**
 * meeting_time_cctz.cpp
 * Meeting time for multiple time zones
 * 2022-06-01 K.OHWADA
 */

// g++ meeting_time.cpp -o bin/meeting   -std=c++11 `pkg-config --cflags --libs cctz`

#include <iostream>
#include <string>
#include <vector>
#include <chrono>
#include <ctime>
#include <iomanip>
#include "cctz/civil_time.h"
#include "cctz/time_zone.h"


/**
 * struct user
 */
struct user
{
   std::string  Name;
   std::string  Zone;
};


using namespace std;

using std::chrono::system_clock;

namespace ch = std::chrono;

const string FORMAT("%Y-%m-%d %H:%M:%S %Z");


/**
 * tz_localtime
 */
string tz_localtime
(     system_clock::time_point time, string zone) 
{
    cctz::time_zone tz;
    load_time_zone(zone, &tz);
    return cctz::format(FORMAT, time, tz); 
}


/**
 * localtime
 */
string localtime( system_clock::time_point time)
{
    const size_t BUFSIZE = 100;
    char buf[BUFSIZE];

     std::time_t t = system_clock::to_time_t(time);
    
    std::strftime(buf, BUFSIZE, FORMAT.c_str(), std::localtime(&t));

    return string(buf);
}


/**
 * print_meeting_times
 */
void print_meeting_times(
        system_clock::time_point time,
   vector<user> const users)
{

    cout << left << setw(15) << setfill(' ')
      << "Local time: "
       << localtime(time) << endl;

   for (auto const & user : users)
   {
      cout << left << setw(15) << setfill(' ')
         << user.Name
         << tz_localtime(time, user.Zone)
         << endl;
   } // for
}


/**
 * main
 */
int main()
{
   vector<user> users{
      user{ "Ildiko", "Europe/Budapest" },
      user{ "Jens", "Europe/Berlin" },
      user{ "Jane", "America/New_York" }
   };

   unsigned int h, m;
   cout << "Hour:"; cin >> h;
   cout << "Minutes:"; cin >> m;

    system_clock::time_point today = ch::system_clock::now();

    system_clock::time_point meeting_time = today + ch::hours{ h } +ch::minutes{ m };

   print_meeting_times(meeting_time, users);

    return 0;
}


// Local time:    2022-08-11 18:02:12 JST
// Ildiko         2022-08-11 11:02:12 CEST
// Jens           2022-08-11 11:02:12 CEST
// Jane           2022-08-11 05:02:12 EDT

