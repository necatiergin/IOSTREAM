#include <string>
#include <iostream>
#include <sstream>

int main()
{
	using namespace std;

	string str;
	cout << "enter your numbers: ";
	getline(cin, str);

	istringstream iss{ str };

	int ival{};
	int sum{};

	while (iss >> ival) {
		sum += ival;
	}

	std::cout << "the sum is = " << sum << '\n';
}
