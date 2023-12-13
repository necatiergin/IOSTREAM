#include <iostream>

int main()
{
	using namespace std;
	int x{};

	cout << hex << uppercase;
	//while (cin.operator>>(x).operator bool())
	while (cin >> x) {
		cout << "[" << x << "]\n";
	}
}
