#include <fstream>
#include <iostream>

int main()
{
	using namespace std;

	ifstream ifs{ "primes.dat", ios::binary };
	if (ifs.fail()) {
		cerr << "cannot open file\n";
		return 1;
	}

	int n{};
	cout << "enter the index of the prime number : ";
	cin >> n;

	ifs.seekg((n - 1) * sizeof(int), ios::beg);
	int ival;
	ifs.read(reinterpret_cast<char*>(&ival), sizeof(int));
	cout << "number of bytes read : " << ifs.gcount() << '\n';
	cout << n << ". prime : " << ival << '\n';
}
