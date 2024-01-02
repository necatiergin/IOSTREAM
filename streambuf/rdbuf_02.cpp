#include <fstream>
#include <iostream>


void print_file_n_times(const std::string& filename, int n)
{
	std::ifstream ifs{ filename };
	if (!ifs) {
		std::cerr << "dosya acilamadi\n";
		std::exit(EXIT_FAILURE);
	}
	while (n--) {
		std::cout << ifs.rdbuf();
		std::cout << "\n---------------------------------------------------------------\n";
		std::cout << "bir tusa basiniz: "; 
		(void)std::getchar();
		ifs.seekg(0);
	}
}


int main()
{
	print_file_n_times("main.cpp", 3);
}
