#include <iostream>

int main()
{
	using namespace std;

	double dval = 237.645483;

	cout << scientific << dval << "\n" << fixed << dval << "\n" << hexfloat << dval << "\n";
}
