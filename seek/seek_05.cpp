#include <sstream>
#include <iostream>


int main()
{
	std::ostringstream oss;

	oss << "0123456789";

	auto pos = oss.tellp();  // 10. konum
	oss << "ABC";

	std::cout << oss.str() << '\n';  // 0123456789ABC

	oss.seekp(pos);
	oss << "XYZ";

	std::cout << oss.str() << '\n';  // 0123456789XYZ
}
