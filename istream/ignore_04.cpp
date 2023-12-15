// feom cppreference.com

#include <sstream>
#include <iostream>
#include <limits>

constexpr auto max_size = std::numeric_limits<std::streamsize>::max();

int main()
{
    std::istringstream input(
        "345necati ergin\n"
        "976ahmet acar\n"
        "4525ayse kale\n"
        "781832mustafa aksoy\n");
    for (;;)
    {
        int ival;
        input >> ival;

        if (input.eof() || input.bad())
            break;
        if (input.fail())
        {
            input.clear(); // unset failbit
            input.ignore(max_size, '\n'); // skip bad input
        }
        else
            std::cout << ival << '\n';
    }
}
