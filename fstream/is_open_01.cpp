// from cppreference.com

#include <string>
#include <fstream>
#include <iostream>

int main()
{
    std::string filename = "some_file";

    std::fstream fs(filename, std::ios::in);

    std::cout << std::boolalpha;
    std::cout << "fs.is_open() = " << fs.is_open() << '\n';

    if (!fs.is_open())
    {
        fs.clear();
        fs.open(filename, std::ios::out);
        std::cout << "fs.is_open() = " << fs.is_open() << '\n';
    }
}
