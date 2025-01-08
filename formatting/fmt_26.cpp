#include <iomanip>
#include <iostream>
#include <sstream>

int main()
{
	using namespace std;

	ostringstream oss;

	oss << "\"necati\" ve \"hakan\"";

	cout << oss.str() << '\n';

	oss.str("");
	cout << oss.str() << '\n';
	oss << quoted("\"necati\" ve \"hakan\"");
	cout << oss.str() << '\n';
}
