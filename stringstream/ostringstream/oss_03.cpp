#include <sstream>
#include <iostream>

int main()
{
	std::ostringstream oss;

	for (int i = 0; i < 10; ++i) {
		oss << i;
		std::cout << oss.str() << '\n';
	}

	oss.str("");

	for (int i = 0; i < 10; ++i) {
		oss << i;
		std::cout << oss.str() << '\n';
		oss.str("");
	}
}
