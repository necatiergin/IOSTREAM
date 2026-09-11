#include <iostream>
#include <iterator>
#include <numeric>

int main()
{
	std::cout << "enter the numbers: " <<
		accumulate(std::istream_iterator<int>{std::cin}, {}, 0) << '\n';
}
