#include <fstream>
#include <iostream>

int main()
{
	using namespace std;
	cout << boolalpha;

	ifstream ifs;

	std::cout << "has ifs an open file : " << ifs.is_open() << '\n';
	ifs.open("temp.txt");
	std::cout << "has ifs an open file : " << ifs.is_open() << '\n';
	ifs.close();
	std::cout << "has ifs an open file : " << ifs.is_open() << '\n';
}
