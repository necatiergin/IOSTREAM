#include <fstream>
#include <iostream>


using namespace std;

int main()
{
	ifstream ifs{ ali.txt" };
	if (!ifs) {
		cerr << "dosya acilamadi\n";
		return 1;
	}

	char c;
	while (ifs.get(c)) {
		cout << c;;
	}
	ifs.clear();
	ifs.close();
	std::cout << "\nbir tusa basiniz : "; getchar();

	ifs.open("veli.txt");
	
	while (ifs.get(c)) {
		cout << c;
	}

}

