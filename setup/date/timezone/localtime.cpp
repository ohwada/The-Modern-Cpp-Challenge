/**
 * localtime.cpp
 * 2022-06-01 K.OHWADA
 */

 // localtime in multiple time zones

#include <iostream>
#include <string>
#include <vector>
#include <string_view>
#include <iomanip>
#include "date/tz.h"


/**
 * struct user
 */
struct user
{
   std::string             Name;
   date::time_zone const * Zone;

   user(std::string_view name, std::string_view zone)
      : Name{name.data()}, Zone(date::locate_zone(zone.data()))
   {      
   }
};


using namespace std;
namespace ch = std::chrono;


/**
 * print_localtimes
 */
void print_localtimes( 
   ch::system_clock::time_point now,
   std::vector<user> const & users)
{

  auto localtime = make_zoned(date::current_zone(), now);

   cout 
      << left << setw(15) << setfill(' ')
      << "Local time: " 
      << localtime << std::endl;

   for (auto const & user : users)
   {
        auto user_time = make_zoned(user.Zone, now);
      cout
         << left << setw(15) << setfill(' ')
         << user.Name
         << user_time
         << endl;
   }
}


/**
 * main
 */
int main()
{
   std::vector<user> users{
      user{ "Ildiko", "America/Los_Angeles" },
      user{ "Jens", "Europe/Berlin" },
      user{ "Jane", "America/New_York" }
   };

    auto now = ch::system_clock::now();

   print_localtimes( now, users);

    return 0;
}

// Local time:    2022-09-10 09:45:43.548878 JST
// Ildiko         2022-09-09 17:45:43.548878 PDT
// Jens           2022-09-10 02:45:43.548878 CEST
// Jane           2022-09-09 20:45:43.548878 EDT
