#include <iostream>

int main()
{
	using std::cin, std::cout, std::hex, std::uppercase;
	int x{};

	cout << hex << uppercase;
	//while (cin.operator>>(x).operator bool())
	while (cin >> x) {
		cout << "[" << x << "]\n";
	}
}
