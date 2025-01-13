#include <string>
#include <iostream>
#include <sstream>

int main()
{
	std::string str;
	std::cout << "enter your numbers: ";
	std::getline(std::cin, str);

	std::istringstream iss{ str };

	int ival{};
	int sum{};

	while (iss >> ival) {
		sum += ival;
	}

	std::cout << "the sum is = " << sum << '\n';
}
