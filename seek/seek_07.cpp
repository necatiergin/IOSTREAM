#include <sstream>
#include <iostream>


int main()
{
	std::ostringstream oss;

	oss << "0123456789";
	oss.seekp(std::streamoff{ -5 }, std::ios::end);
	oss << "ABC";

	std::cout << oss.str() << '\n';  // 01234ABC89
}
