#include <sstream>
#include <iostream>

int main()
{
	using namespace std;

	ostringstream oss{ "*necati ergin" };

	cout << "[" << oss.str() << "]\n";

	oss.seekp(7);
	oss.put('-');
	cout << "[" << oss.str() << "]\n";
	oss.seekp(0, ios::end);
	oss.put('!');
	cout << "[" << oss.str() << "]\n";
	oss.seekp(0);
	oss.put('!');
	cout << "[" << oss.str() << "]\n";
}
