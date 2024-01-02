#include <iostream>
#include <fstream>

int main(int argc, char** argv)
{
	if (argc != 2) {
		std::cerr << "usage: <type> <file name>\n";
		return 1;
	}

	std::ifstream ifs{ argv[1] };
	if (!ifs) {
		std::cerr << argv[1] << " dosyasi acilamadi\n";
		return 2;
	}
	std::cout << ifs.rdbuf();
}
