#include <fstream>
#include <iostream>
#include "nutility.h"  //isprime

int main()
{
	std::ofstream ofs{ "primes.dat", std::ios::binary };
	if (ofs.fail()) {
		std::cerr << "dosya olusturulamadi\n";
		return 1;
	}

	int prime_count{};
	int ival{ 2 };

	while (prime_count < 10'000) {
		if (isprime(ival)) {
			ofs.write(reinterpret_cast<char*>(&ival), sizeof(int));
			++prime_count;
		}
		++ival;
	}
}
