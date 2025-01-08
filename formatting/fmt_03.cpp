#include <iostream>

int main()
{
	using std::cout, std::ios;

	int x = 15;

	cout << x << '\n';
	cout.setf(ios::showpos);
	cout << x << '\n';
	//cout.flags(cout.flags() & ~ios::showpos);
	cout.unsetf(ios::showpos);
	cout << x << '\n';
}
