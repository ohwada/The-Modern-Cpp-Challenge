/**
 *  lcm.cpp
 * // Least Common Multiple 
 * 2022-06-01 K.OHWADA
 */

// g++ lcm.cpp -std=c++17


#include <iostream>
#include <numeric>
#include <vector>


/**
 *  main
 */
int main()
{
   int n = 0;
   std::cout << "Input count:";
   std::cin >> n;

   std::vector<int> numbers;
   for (int i = 0; i < n; ++i)
   {
        int v= 0;
      std::cin >> v;
      numbers.push_back(v);
   }

    int a =  numbers.front();
    int b = numbers.back();

   std::cout
      << "lcm(" << a << ", " << b << ")="
      <<  std::lcm(a, b)
      << std::endl;

    return 0;
}

// Input count:2
// 4
// 6
// lcm(4, 6)=12


