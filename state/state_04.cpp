#include <iostream>
#include <string>

int main()
{
	using std::cout, std::cin, std::string;

	int x{};

	while (std::cout << "enter an integer: " && !(std::cin >> x)) {
		if (cin.eof()) {
			std::cout << "you have not entered anything!\n";
			cin.clear();
		}
		else {
			cin.clear();
			string line;
			getline(cin, line);
			cout << "[" << line << "] is not a valid integer!\n";
		}
	}

	cout << "your number is : " << x << '\n';
}
