#include <fstream>
#include <iostream>
#include <vector>
#include <iterator>

int main()
{
	using namespace std;

	ifstream ifs{ "primes.txt" };
	if (!ifs) {
		cerr << "cannot open file\n";
		return 1;
	}

	vector<int> ivec{ istream_iterator<int>(ifs), istream_iterator<int>() };

	std::cout << ivec.size() << '\n';
}
