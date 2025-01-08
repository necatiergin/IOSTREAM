#include <iostream>

int main()
{
	std::cout << (10 > 5) << " " << (3 < 1) << '\n';
	std::cout.setf(std::ios::boolalpha);
	std::cout << (10 > 5) << " " << (3 < 1) << '\n';
}
