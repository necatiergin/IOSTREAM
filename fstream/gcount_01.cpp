#include <iostream>
#include <fstream>

int main() 
{
	char str[100];

	std::ifstream ifs{ "nutility.h" };
	if (!ifs) {
		std::cerr << "cannot open file!\n";
		return 1;
	}

	ifs.getline(str, 100);

	std::cout << ifs.gcount() << '\n';
}
