/**
 *  ip_address.cpp
 * 2022-06-01 K.OHWADA
 */


#include <iostream>
#include <vector>
#include <string>

#define ASIO_STANDALONE
#include "boost/asio.hpp"


/**
 *  get_ip_address
 */
std::vector<std::string> get_ip_address(std::string hostname)
{
   std::vector<std::string> ips;

   try
   {
      boost::asio::io_context context;
      boost::asio::ip::tcp::resolver resolver(context);

    auto endpoints = resolver.resolve(boost::asio::ip::tcp::v4(), hostname.data(), "");

      for (auto e = endpoints.begin(); e != endpoints.end(); ++e)
         ips.push_back(((boost::asio::ip::tcp::endpoint)*e).address().to_string());
   }
   catch (std::exception const & e)
   {
      std::cerr << "exception: " << e.what() << std::endl;
   }

   return ips;
}

using namespace std;


/**
 *  main
 */
int main()
{
    const string HOST("packtpub.com");

      cout << HOST << endl;

   auto ips = get_ip_address( HOST);

   for (auto const & ip : ips) {
      cout << ip << endl;
} // for

    return 0;
}

// packtpub.com
// 172.67.31.83
// 104.22.0.175
// 104.22.1.175

