#include <iostream>
#include <sstream>

using namespace std;

double readsum(std::istream& is)
{
	auto old_exception = is.exceptions();
	is.exceptions(ios::failbit | ios::badbit);
	double dval, sum{};

	try {
		while (is >> dval)
			sum += dval;
	}
	catch (...) {
		if (!is.eof()) {
			is.exceptions(old_exception);
			throw;
		}
	}

	is.exceptions(old_exception);

	return sum;
}


int main()
{
	istringstream iss{ "2.6 3.4 5.6 6.8 1.1 8.9" };

	double sum;
	try {
		sum = readsum(iss);
	}
	catch (const std::ios::failure& ex) {
		cerr << "giris cikis hatasi " << ex.what() << "\n";
		return 1;
	}
	catch (const std::exception& ex) {
		cerr << "standart kutuphane hatasi: " << ex.what() << "\n";
		return 2;
	}
	catch (...) {
		cerr << "bilinmeyen hata\n";
		return 3;
	}

	cout << "sum = " << sum << "\n";
}
