#include <fstream>
#include <iostream>

int main()
{
	boolalpha(std::cout);

	std::ofstream ofs;

	std::cout << "has ofs an open file : " << ofs.is_open() << '\n';
	ofs.open("temp.txt");
	std::cout << "has ifs an open file : " << ofs.is_open() << '\n';
	ofs.close();
	std::cout << "has ifs an open file : " << ofs.is_open() << '\n';
}
