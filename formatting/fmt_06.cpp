#include <iostream>

int main()
{
	using std::cout, std::ios;

	cout.setf(ios::hex, ios::basefield);
	cout << "ios::dec : " << (cout.flags() & ios::dec ? "set" : "unset") << '\n';
	cout << "ios::oct : " << (cout.flags() & ios::oct ? "set" : "unset") << '\n';
	cout << "ios::hex : " << (cout.flags() & ios::hex ? "set" : "unset") << '\n';
	int ival = 47802;
	cout << "ival = " << ival << '\n';
}
