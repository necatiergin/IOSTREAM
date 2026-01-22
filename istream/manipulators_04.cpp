#include <iostream>
#include <string>

int main()
{
	std::string s;

	std::cout << "enter a string: ";
	std::getline(std::cin >> std::ws, s);

	std::cout << "[" << s << "]\n";
}
