#include <iostream>
#include <limits>
#include <sstream>

int main()
{
	using namespace std;
	
	istringstream iss1{ "a876necati" };
	istringstream iss2{ "bc223ahmet" };
	istringstream iss3{ "can6524tansel" };

	int ival;

	iss1.ignore();
	iss1 >> ival;
	cout << "ival = " << ival << '\n';
	iss2.ignore(2);
	iss2 >> ival;
	cout << "ival = " << ival << '\n';
	iss3.ignore(3);
	iss3 >> ival;
	cout << "ival = " << ival << '\n';
}
