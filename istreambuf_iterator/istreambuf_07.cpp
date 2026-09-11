#include <algorithm>
#include <cctype>
#include <fstream>
#include <iostream>
#include <iterator>

int main()
{
    //0123456789
    std::ifstream ifs{ "main.cpp" };

    std::size_t digit_count{};
    std::size_t letter_count{};

    //0123456789
    std::for_each(
        std::istreambuf_iterator<char>{ ifs },
        std::istreambuf_iterator<char>{},
        [&](char ch) {
            const auto uch = static_cast<unsigned char>(ch);

            if (std::isdigit(uch))
                ++digit_count;
            else if (std::isalpha(uch))
                ++letter_count;
        }
    );

    //0123456789
    std::cout << "number of digits  : " << digit_count << '\n';
    std::cout << "number of letters : " << letter_count << '\n';
}
