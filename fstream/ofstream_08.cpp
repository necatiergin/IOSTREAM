#include <iostream>
#include <fstream>
#include "nutility.h"

int main()
{
	std::ofstream ofs{ "primes.dat", std::ios::binary };
	if (!ofs) {
		std::cerr << "primes.dat dosyasi olusturulamiyor\n";
		return 1;
	}

	int x = 2;
	int prime_counter{};

	while (prime_counter < 1'000'000) {
		if (isprime(x)) {
			ofs.write(reinterpret_cast<const char*>(&x), sizeof(x));
			++prime_counter;
		}
		++x;
	}
}
