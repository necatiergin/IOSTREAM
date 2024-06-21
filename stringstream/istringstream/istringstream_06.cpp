#include <sstream>
#include <iostream>

int main()
{
	std::istringstream iss{ "0123456789BABADEDE" };

	int c;

	while ((c = iss.get()) != EOF) {
		std::cout << c << ' ' << (char)c << '\n';
	}
}
