#include <iostream>

int main()
{
	using namespace std;

	int x{};

	cout << "enter a number: ";
	cout << boolalpha;
	cin >> x;

	cout << "good : " << cin.good() << '\n';
	cout << "eof  : " << cin.eof() << '\n';
	cout << "fail : " << cin.fail() << '\n';
	cout << "bad  : " << cin.bad() << '\n';

	cout << "your number is " << x << '\n';
}
