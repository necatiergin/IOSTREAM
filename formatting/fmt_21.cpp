#include <iostream>
#include <limits>
#include <sstream>

std::istream&
ignore_line(std::istream& is)
{
	return is.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}


int main()
{
	std::istringstream iss{ "ali\nveli\nhasan" };
	std::string str;

	iss >> ignore_line >> ignore_line >> str;
	std::cout << "[" << str << "]\n";
}
