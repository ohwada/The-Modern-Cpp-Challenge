// https://github.com/nlohmann/json#examples

#include <iostream>
#include <string>
#include "json.hpp"

using json = nlohmann::json;

int main()
{

std::string str = R"( {
    "pi": 3.141,
    "happy": true,
    "name": "taro"
} )";

  std::cout << str << std:: endl;

    json data = json::parse(str);

    json j_pi = data["pi"];
    json j_happy = data["happy"];
    json j_name = data["name"];

    double pi = j_pi.get<double>();
    bool happy = j_happy.get<bool>();
    std::string name = j_name.get<std::string>();
    
    assert(pi == 3.141);
    assert(happy);
    assert(name == "taro");

    std::cout << "name: " << name << std:: endl;
    std::cout << "successful" << std:: endl;

    return 0;
}
   
 // {
 //   "pi": 3.141,
//    "happy": true,
//    "name": "taro"
//} 
// name: taro
// successful