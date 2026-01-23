#include <sstream>
#include <iostream>

int main()
{
	std::istringstream input("10 20 30\n");
	auto* old_in = std::cin.rdbuf(input.rdbuf());

	int a, b, c; 
	std::cin >> a >> b >> c;

	std::cout << "a = " << a << '\n';
	std::cout << "b = " << b << '\n';
	std::cout << "c = " << c << '\n';

	std::cin.rdbuf(old_in);
}
