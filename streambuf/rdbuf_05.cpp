#include <iostream>
#include <sstream>
#include <fstream>

int main()
{
	using namespace std;
	
	std::ofstream ofs{ "out.txt" };
	if (!ofs) {
		std::cerr << "out.txt dosyasi olusturulamadi\n";
		exit(EXIT_FAILURE);
	}

	cout.rdbuf(ofs.rdbuf());

	cout << "ali\n";
	for (int i = 0; i < 10; ++i) {
		cout << i << '\n';
	}

	ofs.close();
}
