#include <iostream>
#include <fstream>

int main()
{
	using namespace std;

	cout << hex << uppercase << showbase << boolalpha;
	
	std::ofstream ofs{ "out.txt" };
	if (!ofs) {
		std::cerr << "out.txt dosyasi olusturulamadi\n";
		exit(EXIT_FAILURE);
	}
	ofs.copyfmt(cout);

	ofs << 54807 << ' ' << (10 > 20);
}
