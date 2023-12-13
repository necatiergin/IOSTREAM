#include <fstream>
#include <iostream>
#include "nutility.h"


int main()
{
	using namespace std;

	ofstream ofs{ "primes.dat", ios::binary };
	if (ofs.fail()) {
		cerr << "dosya olusturulamadi\n";
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
