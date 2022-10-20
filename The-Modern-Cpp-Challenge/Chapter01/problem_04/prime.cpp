/**
 * prime.cpp
* Largest prime smaller than given number 
 * 2022-06-01 K.OHWADA
 */

// g++ prime.cpp -std=c++11

#include <iostream>
#include <boost/multiprecision/miller_rabin.hpp>
#include <boost/random/mersenne_twister.hpp>


/**
 * is_prime
 */
template <class Engine>
bool is_prime(int const num,  Engine &gen)
{
    return boost::multiprecision::miller_rabin_test(num, 25, gen);
}


/**
 * main
 */
int main()
{
    boost::random::mt19937 gen;

   int limit = 0;
   std::cout << "Upper limit:";
   std::cin >> limit;

   for (int i = limit; i > 1; i--)
   {
      if (is_prime(i, gen))
      {
         std::cout << "Largest prime:" << i << std::endl;
         return 0;
      }
   }
}
