#include <sstream>
#include <string>
#include <iostream>
#include <iomanip>

int main()
{
	using namespace std;

	istringstream iss{ "Let the ruling classes tremble at a communistic revolution. "
		"The proletarians have nothing to lose but their chains. "
		"They have a world to win" };

	string word;

	int cnt{};

	while (iss >> word) {
		cout << setw(2) << ++cnt << " " << word << '\n';
	}
}
