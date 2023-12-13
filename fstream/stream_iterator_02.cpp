#include <fstream>
#include <iostream>
#include <vector>
#include <iterator>

int main()
{
	using namespace std;

	ifstream ifs{ "asal1000000_10.txt" };
	if (!ifs) {
		cerr << "dosya acilamadi\n";
		return 1;
	}

	vector<int> ivec{ istream_iterator<int>(ifs), istream_iterator<int>() };

	std::cout << ivec.size() << "\n";
}
