#include <fstream>
#include <iostream>

int main()
{
	std::ifstream ifs{"ali.txt" };
	if (!ifs) {
		std::cerr << "cannot open file\n";
		return 1;
	}

	char c;
	while (ifs.get(c)) {
		std::cout << c;
	}
	//ifs.clear();
	ifs.close();
	std::cout << "\nbir tusa basiniz : "; 
	std::getchar();

	ifs.open("veli.txt");
	if (!ifs) {
		std::cerr << "cannot open veli.txt\n";
		return 1;
	}

	while (ifs.get(c)) {
		std::cout << c;
	}
}
