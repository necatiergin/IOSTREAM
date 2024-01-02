//from cppreference.com

#include <iostream>
#include <fstream>
#include <string>

int main()
{
    std::ofstream os("test.txt");
    std::ifstream is("test.txt");
    std::string value("0");

    os << "Hello";
    is >> value;

    std::cout << "Result before tie(): \"" << value << "\"\n";
    is.clear();
    is.tie(&os);

    is >> value;

    std::cout << "Result after tie(): \"" << value << "\"\n";
}
