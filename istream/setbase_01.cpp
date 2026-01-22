#include <iostream>
#include <string>
#include <iomanip>


int main()
{
	int x;

	std::cout << "enter an integer : ";

	std::cin >> std::setbase(16) >> x;

	std::cout << "x = " << x << '\n';
}
