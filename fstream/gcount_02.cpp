#include <iostream>

int main()
{
	int x{};

	std::cout << "enter an integer: ";
	std::cin >> x;
	std::cin.ignore(100, '\n');
	std::cout << std::cin.gcount() << " characters ignored!\n";
}
