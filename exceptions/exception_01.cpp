#include <iostream>

int main()
{
	using namespace std;

	cout << boolalpha << (cin.exceptions() == ios::goodbit) << '\n';
	cin.exceptions(ios::failbit);

	int x;

	cout << "enter an integer: ";

	try {
		cin >> x;
		cout << "x = " << x << '\n';
	}
	catch (const std::ios::failure& ex) {
		std::cout << "exception caught: " << ex.what() << '\n';
	}
}
