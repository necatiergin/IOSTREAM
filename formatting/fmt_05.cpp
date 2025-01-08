#include <iostream>

int main()
{
	using namespace std;

	cout << (10 < 22) << '\n';
	cout.setf(ios::boolalpha);
	//cout.flags(cout.flags() | ios::boolalpha);
	cout << (10 < 22) << '\n';
	cout.unsetf(ios::boolalpha);
	//cout.flags(cout.flags() & ~ios::boolalpha);
	cout << (10 < 22) << '\n';
}
