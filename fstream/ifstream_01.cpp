#include <fstream>
#include <iostream>

using namespace std;

int main()
{
	ifstream ifs{ "abbaa.txt" };
	if (!ifs) {
		cerr << "dosya acilamadi\n";
		return 1;
	}
	cout << "dosya acildi\n";
}
