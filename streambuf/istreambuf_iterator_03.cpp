#include <algorithm>
#include <iterator>
#include <iostream>

int main()
{
    std::cout << "enter a string : "; // ctlr-z  ctrl-d
    auto count = std::count(
        std::istreambuf_iterator<char>(std::cin),
        std::istreambuf_iterator<char>(),
        'a'
    );

    std::cout << "a count = " << count << '\n';
}
