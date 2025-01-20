#include <fstream>
#include <iostream>

int main()
{
	std::ifstream ifs{ "primes.dat", std::ios::binary };
	if (ifs.fail()) {
		std::cerr << "cannot open file\n";
		return 1;
	}

	int n{};
	std::cout << "enter the index of the prime number : ";
	std::cin >> n;

	ifs.seekg((n - 1) * sizeof(int), std::ios::beg);
	int ival;
	ifs.read(reinterpret_cast<char*>(&ival), sizeof(int));
	std::cout << "number of bytes read : " << ifs.gcount() << '\n';
	std::cout << n << ". prime : " << ival << '\n';
}
