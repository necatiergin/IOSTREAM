#include <iostream>
#include <fstream>

int main()
{
	std::ifstream ifs{ "ahmet.txt" };

	if (!ifs) {
		std::cerr << "cannot open file\n";
	}
}
