#include <iostream>
#include <sstream>
#include <fstream>
#include <iomanip>

bool isprime(int val)
{
	if (val < 2)
		return false;

	if (val % 2 == 0)
		return val == 2;

	if (val % 3 == 0)
		return val == 3;

	if (val % 5 == 0)
		return val == 5;

	for (int k = 7; k * k <= val; k += 2)
		if (val % k == 0)
			return false;

	return true;
}

int main()
{
	using namespace std;

	int n{};
	cout << "ilk kac asal sayi: ";
	cin >> n;
	cout << "bir satirda kac sayi olsun: ";
	int prime_per_line{};
	cin >> prime_per_line;

	ostringstream oss;
	oss << "asal" << n << "_" << prime_per_line << ".txt";
	ofstream ofs{ oss.str() };
	if (!ofs) { cerr << "olusturulamadi\n"; return 1; }

	int x = 2;
	int prime_count = 0;

	ofs << left;

	while (prime_count < n) {
		if (isprime(x)) {
			if (prime_count && prime_count % prime_per_line == 0)
				ofs << '\n';
			ofs << setw(12) << x;
			++prime_count;
		}
		++x;
	}
}
