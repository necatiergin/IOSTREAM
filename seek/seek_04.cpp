#include <fstream>
#include <iostream>

int main()
{
	using namespace std;

	ifstream ifs{ "primes.dat", ios::binary };
	if (ifs.fail()) {
		cerr << "acilamadi\n";
		return 1;
	}

	int n{};
	cout << "kacinci asal sayi : ";
	cin >> n;

	ifs.seekg((n - 1) * sizeof(int), ios::beg);
	int ival;
	ifs.read(reinterpret_cast<char*>(&ival), sizeof(int));
	cout << "okunan byte sayisi: " << ifs.gcount() << '\n';
	cout << n << ". asal sayi: " << ival << '\n';
}
