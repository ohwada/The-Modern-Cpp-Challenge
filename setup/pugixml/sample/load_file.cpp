/**
 * load_file.cpp
 * 2022-06-01 K.OHWADA
 */

// This is an example of loading XML document from file
// original : https://pugixml.org/docs/quickstart.html


#include <iostream>
#include <cassert>
#include "pugixml.hpp"


/**
 * main
 */
int main()
{
    pugi::xml_document doc;

    pugi::xml_parse_result result = doc.load_file("tree.xml");

    std::cout << "Load result: " << result.description() << std::endl;

    std::string mesh_name = doc.child("mesh").attribute("name").value();
 
    assert(mesh_name == "mesh_root");

    std::cout << "mesh name: " << mesh_name << std::endl;

    return 0;
}

// Load result: No error
// mesh name: mesh_root
