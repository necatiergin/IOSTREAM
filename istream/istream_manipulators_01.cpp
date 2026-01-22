#include <iostream>
#include <string>
#include <iomanip>


int main()
{
	using namespace std;

	cout << "enter three integers : ";
	int x, y, z;

	cin >> x >> hex >> y >> oct >> z;  //123 123 123

	cout << "x = " << x << '\n';
	cout << "y = " << y << '\n';
	cout << "z = " << z << '\n';
}
