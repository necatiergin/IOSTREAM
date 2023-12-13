#include <fstream>
#include <iostream>

int main()
{
	std::ifstream ifs{ "boooo.txt" };

	//if (!ifs.is_open()) {
	//if (ifs.fail()) {
	//if (!ifs.good()) {
	if (!ifs) {
		std::cerr << "cannot open file\n";
		return 1;
	}

	std::cout << "file opened!\n";

}
