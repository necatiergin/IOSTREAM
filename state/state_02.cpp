#include <iostream>

int main()
{
	using namespace std;

	//if (cin)
	if (cin.good())
		cout << "stream is Ok\n";
	else
		cout << "stream is not OK\n";

	int ival;
	cout << "enter an integer: ";
	cin >> ival;

	if (cin.good())
		cout << "stream is Ok\n";
	else
		cout << "stream is not OK\n";
}
