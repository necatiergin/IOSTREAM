#include <sstream>
#include <cassert>
#include <iostream>

int main()
{
	using namespace std;

	cout << hex << uppercase << showbase;

	ostringstream os;
	os.copyfmt(cout);

	os << 47802;

	cout << os.str();
}
