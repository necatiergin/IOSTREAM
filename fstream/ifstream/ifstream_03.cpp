#include <fstream>
#include <iostream>

int main()
{
	using namespace std;

	ifstream ifs{ "temp.txt" };

	//cout << ifs.rdbuf();#include <fstream>
#include <iostream>

int main()
{
	std::ifstream ifs{ "temp.txt" };
	//code
	//std::cout << ifs.rdbuf();

	char c;
	while (ifs.get(c)) {
		std::cout.put(c);
	}
}

	char c;
	while (ifs.get(c)) {
		cout.put(c);
	}
}
