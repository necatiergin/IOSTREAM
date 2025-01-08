#include <ostream>

std::ostream& nec(std::ostream& os)
{
	os.setf(std::ios::uppercase | std::ios::showbase);
	os.setf(std::ios::hex, std::ios::basefield);
	os.setf(std::ios::fixed, std::ios::floatfield);
	os.setf(std::ios::boolalpha);
	///
	return os;
}
