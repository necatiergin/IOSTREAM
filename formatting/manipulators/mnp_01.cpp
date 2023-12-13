//örnek ostream manipülatörleri

#include <ostream>

std::ostream& Boolalpha(std::ostream& os)
{
	os.setf(std::ios::boolalpha);
	return os;
}

std::ostream& NoBoolalpha(std::ostream& os)
{
	os.unsetf(std::ios::boolalpha);
	return os;
}

std::ostream& Hex(std::ostream& os)
{
	os.setf(std::ios::hex, std::ios::basefield);
	return os;
}
