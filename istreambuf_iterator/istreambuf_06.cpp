#include <algorithm>
#include <fstream>
#include <iterator>
#include <iostream>

int main()
{
    std::ifstream ifs1{ "a.txt", std::ios::binary };
    std::ifstream ifs2{ "b.txt", std::ios::binary };

    using Iter = std::istreambuf_iterator<char>;

    const bool same = std::equal(
        Iter{ ifs1 }, Iter{},
        Iter{ ifs2 }, Iter{}
    );

    std::cout << (same ? "same\n" : "different\n");
}
