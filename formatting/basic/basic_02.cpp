#include <iostream>

int main()
{
	using namespace std;

	cout << (10 > 5) << " " << (3 < 1) << '\n';
	cout.setf(ios::boolalpha);
	cout << (10 > 5) << " " << (3 < 1) << '\n';
}
