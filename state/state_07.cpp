//from cppreference

#include <iostream>
#include <sstream>

int main()
{
    std::ostringstream stream;

    if (stream.rdstate() == std::ios_base::goodbit) {
        std::cout << "stream state is goodbit\n";
    }

    stream.setstate(std::ios_base::eofbit);

    // check state is exactly eofbit (no failbit and no badbit)
    if (stream.rdstate() == std::ios_base::eofbit) {
        std::cout << "stream state is eofbit\n";
    }
}
