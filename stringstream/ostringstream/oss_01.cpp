#include <sstream>
#include <iostream>

int main()
{
	using std::cout, std::cin, std::hex, std::oct;

	int x;

	cout << "enter an integer: ";
	cin >> x;

	std::ostringstream oss;

	oss << x << "|" << hex << x << "|" << oct << x << "|";

	cout << oss.str() << '\n';
}
