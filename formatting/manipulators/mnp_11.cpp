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
	using namespace std;

	istringstream iss{ "ali\nveli\nhasan" };
	string str;

	iss >> ignore_line >> ignore_line >> str;
	cout << "[" << str << "]\n";
}
