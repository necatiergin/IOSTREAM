#include <iostream>

int main()
{
	using std::cout, std::ios;

	double dval = 9;

	cout << dval << '\n';
	cout.setf(ios::showpoint);
	cout << dval << '\n';
	cout.unsetf(ios::showpoint);
	cout << dval << '\n';
}
