#include <fstream>
#include <iostream>
#include <vector>
#include <iterator>

int main()
{
	std::ifstream ifs{ "asal1000000_10.txt" };
	if (!ifs) {
		std::cerr << "dosya acilamadi\n";
		return 1;
	}

	std::vector<int> ivec{ std::istream_iterator<int>(ifs), {} };

	std::cout << ivec.size() << '\n';
