#include <iostream>
#include <sstream>
#include <fstream>

int main()
{
	std::ofstream ofs{ "out.txt" };
	if (!ofs) {
		std::cerr << "out.txt dosyasi olusturulamadi\n";
		exit(EXIT_FAILURE);
	}

	std::cout.rdbuf(ofs.rdbuf());

	std::cout << "ali\n";
	for (int i = 0; i < 10; ++i) {
		std::cout << i << '\n';
	}

	ofs.close();
}
