#include <fstream>
#include <iostream>
#include "nutility.h"
#include <vector>
#include <algorithm>
#include <iterator>

int main()
{
	using namespace std;
	constexpr size_t size = 100u;

	ifstream ifs{ "primes.dat", ios::binary };
	if (ifs.fail()) {
		cerr << "dosya acilamadi\n";
		return 1;
	}
	vector<int> ivec(size);

	while (ifs.read(reinterpret_cast<char*>(ivec.data()), sizeof(int) * size)) {
		copy(ivec.begin(), ivec.begin() + size, ostream_iterator<int>(cout, " "));
		(void)getchar();
	}

	if (auto n = static_cast<int>(ifs.gcount() / sizeof(int))) {
		copy(ivec.begin(), ivec.begin() + n, ostream_iterator<int>(cout, " "));
	}
}
