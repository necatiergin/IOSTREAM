#include <iostream>
#include <iomanip>

int main()
{
	using std::cout, std::setfill, std::setw;
	int ival = 3451;
	cout << setfill('*') << setw(12) << ival << "necati" << '\n';
}
