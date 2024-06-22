#include <sstream>
#include <iostream>

int main()
{
	std::istringstream iss{ "C++ is a complex programming language." };
	std::ostringstream oss;

	oss << iss.rdbuf();

	std::cout << oss.str() << '\n';
}
