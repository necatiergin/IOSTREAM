#include <string>
#include <fstream>
#include <iostream>
#include <exception>

void print_file_n_times(const std::string& filename, int n)
{
	// open file
	std::ifstream ifs(filename);
	if (!ifs)
		throw std::runtime_error{ "dosya acilamadi\n" };

	while (n--) {
		std::cout << ifs.rdbuf();
		std::cout << "\n--------------------------\n";
		ifs.seekg(0);
	}
}


int main()
{
	print_file_n_times("main.cpp", 5);
}
