#include <iostream>
#include <sstream>

int main()
{
	using namespace std;
	ostream ostr{ cout.rdbuf() };

	ostr.setf(ios::boolalpha | ios::uppercase | ios::showbase);
	ostr.setf(ios::hex, ios::basefield);
	ostr.setf(ios::scientific, ios::floatfield);
	ostr.precision(2);

	int x = 47'802, y = 57'054;
	double dval = 4187.7233;

	cout << x << " " << y << " " << dval << " " << (x > y) << '\n';
	ostr << x << " " << y << " " << dval << " " << (x > y) << '\n';
}
