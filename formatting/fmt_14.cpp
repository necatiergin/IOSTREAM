#include <ostream>

std::ostream& Endl(std::ostream& os)
{
	os.put('\n');
	os.flush();
	return os;
}
