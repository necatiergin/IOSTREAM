#include <fstream>
#include <iostream>

int main()
{
	std::ifstream ifs{ "temp.txt" };
	if (!ifs) {
		std::cerr << "cannot open file\n";
		return 1;
	}
	//std::cout << ifs.rdbuf();

	char c;
	while (ifs.get(c)) {
		std::cout.put(c);
	}
}
