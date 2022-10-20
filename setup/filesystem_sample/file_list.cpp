/**
 *  file_list.cpp
 * 2022-06-01 K.OHWADA
 */

// list files in directory

#include <iostream>
#include <filesystem>
#include <fstream>

using namespace std;
namespace fs = std::filesystem;


/**
 *  main
 */
int main()
{
    string path(".");

  // output all files under the directory
  for (const fs::directory_entry& x : fs::directory_iterator( path)) {
    cout << x.path() << endl;
  }

    return 0;
}
