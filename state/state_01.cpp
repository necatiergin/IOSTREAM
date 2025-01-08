#include <iostream>

int main()
{
	using std::cout, std::cin;

	int x{};

	cout << "enter a number: ";
	cout << std::boolalpha;
	cin >> x;

	cout << "good : " << cin.good() << '\n';
	cout << "eof  : " << cin.eof() << '\n';
	cout << "fail : " << cin.fail() << '\n';
	cout << "bad  : " << cin.bad() << '\n';

	cout << "your number is " << x << '\n';
}
