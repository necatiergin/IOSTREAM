#include <iostream>
#include <sstream>

int main()
{
	std::ostream ostr{ std::cout.rdbuf() };

	ostr.setf(std::ios::boolalpha | std::ios::uppercase | std::ios::showbase);
	ostr.setf(std::ios::hex, std::ios::basefield);
	ostr.setf(std::ios::scientific, std::ios::floatfield);
	ostr.precision(2);

	int x = 47'802, y = 57'054;
	double dval = 4187.7233;

	std::cout << x << " " << y << " " << dval << " " << (x > y) << '\n';
	ostr << x << " " << y << " " << dval << " " << (x > y) << '\n';
}
