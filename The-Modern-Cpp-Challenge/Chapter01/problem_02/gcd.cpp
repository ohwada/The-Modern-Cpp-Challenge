/**
 *  gcd.cpp
 * Greatest Common Divisor 
 * 2022-06-01 K.OHWADA
 */

// g++ gcd.cpp -std=c++17

#include <iostream>
#include <numeric>


/**
 * main
 */
int main()
{
   std::cout << "Input numbers:";

   unsigned int a, b;
   std::cin >> a >> b;

   std::cout
      << "gcd(" << a << ", " << b << ")="
      << std::gcd(a, b) << std::endl;

    return 0;
}

// Input numbers:8
// 12
// gcd(8, 12)=4


