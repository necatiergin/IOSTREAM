#include <sstream>
#include <iostream>

int main()
{
	using namespace std;

	int x;

	cout << "enter an integer: ";
	cin >> x;

	ostringstream oss;

	oss << x << "|" << hex << x << "|" << oct << x << "|";

	cout << oss.str() << '\n';
}
