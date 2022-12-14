/**
 *  main2.cpp
 * 2022-06-01 K.OHWADA
 */

 // Temporary log files
// changes from main.cpp
// (1) use <uuid/uuid.h>  instead of "uuid.h"
// (2) added gen_uuid_random() 
// instead of uuids::uuid_random_generator

#include <iostream>
#include <fstream>
#include <string>

// #include "uuid.h"
#include <uuid/uuid.h>

#ifdef USE_BOOST_FILESYSTEM
#  include <boost/filesystem/path.hpp>
#  include <boost/filesystem/operations.hpp>
   namespace fs = boost::filesystem;
#else
#  include <filesystem>
#  ifdef FILESYSTEM_EXPERIMENTAL
   namespace fs = std::experimental::filesystem;
#  else
   namespace fs = std::filesystem;
#  endif
#endif


/**
 *  gen_uuid_random
 */
std::string gen_uuid_random()
{
	uuid_t value;
	uuid_generate(value);

	uuid_string_t result;
	uuid_unparse_upper(value, result);

    return std::string(result);
}


/**
 *  class logger
 */
class logger
{
   fs::path       logpath;
   std::ofstream  logfile;
public:
   logger()
   {
      // auto name = uuids::to_string(uuids::uuid_random_generator{}());
      auto name = gen_uuid_random();

      logpath = fs::temp_directory_path() / (name + ".tmp");
      logfile.open(logpath.c_str(), std::ios::out|std::ios::trunc);
      std::cout << logpath << std::endl;
   }

   ~logger() noexcept
   {
      try {
         if(logfile.is_open())
            logfile.close();
         if (!logpath.empty())
            fs::remove(logpath);
      }
      catch (...) {
      }
   }

   void persist(fs::path const & path)
   {
      logfile.close();
      fs::rename(logpath, path);
      logpath.clear();
   }

   logger& operator<<(std::string_view message)
   {
      logfile << message.data() << '\n';
      return *this;
   }
};


/**
 *  main
 */
int main()
{
   logger log;
   try
   {
      log << "this is a line" << "and this is another one";

      throw std::runtime_error("error");
   }
   catch (...)
   {
      log.persist(R"(lastlog.txt)");
   }
}
