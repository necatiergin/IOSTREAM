#include <algorithm>
#include <iostream>
#include <iterator>

int main()
{
    std::transform(
        std::istream_iterator<int>{ std::cin },
        std::istream_iterator<int>{},
        std::ostream_iterator<int>{ std::cout, "\n" },
        [](int x) {
            return x * x;
        }
    );
}
