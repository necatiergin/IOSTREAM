//from cppreference.com

#include <iostream>
#include <sstream>
 
int main()
{
    std::ostringstream stream;
 
    if (!stream.fail()) {
        std::cout << "stream is not fail\n";
    }
 
    stream.setstate(std::ios_base::failbit);
 
    if (stream.fail()) {
        std::cout << "now stream is fail\n";
    }
 
    if (!stream.good()) {
        std::cout << "and stream is not good\n";
    }
}
