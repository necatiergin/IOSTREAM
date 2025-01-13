#include <fstream>
#include <iostream>
#include <vector>
#include <iterator>

int main()
{
	std::ifstream ifs{ "primes.txt" };
	if (!ifs) {
		std::cerr << "cannot open file\n";
		return 1;
	}

	std::vector<int> ivec{ std::istream_iterator<int>(ifs), std::istream_iterator<int>() };

	std::cout << "size = " << ivec.size() << '\n';
}
