#include <fstream>
#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

int main()
{
	using namespace std;

	ifstream ifs{ "primes.dat", ios::binary };
	if (ifs.fail()) {
		cerr << "dosya acilamadi\n";
		return 1;
	}

	//int ival;
	constexpr size_t size = 10;

	vector<int> ivec(size);

	while (ifs.read(reinterpret_cast<char*>(ivec.data()), sizeof(int) * ivec.size())) {
		copy(ivec.begin(), ivec.begin() + size, ostream_iterator<int>(cout, " "));
		cout << "\n==================================================\n";
	}

	if (auto n = ifs.gcount() / sizeof(int)) {
		copy(ivec.begin(), ivec.begin() + static_cast<int>(n), ostream_iterator<int>(cout, " "));
	}
}
