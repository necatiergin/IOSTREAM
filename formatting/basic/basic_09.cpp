#include <iostream>
#include <sstream>

int main()
{
	using namespace std;

	cout << hex << uppercase << showbase << boolalpha;
	ostringstream oss;

	oss.copyfmt(cout);

	oss << 54807 << (10 > 20);

	cout << oss.str();
}
