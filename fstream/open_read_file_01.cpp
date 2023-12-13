#include <fstream>
#include <string>
#include <stdexcept>
#include <iostream>

std::ifstream open_read_file(const std::string &name)
{
	std::ifstream ifs(name);
	if (!ifs)
		throw std::runtime_error{"cannot open file: " + name};

	return ifs;
}

int main()
{
	try {
		auto ofs = open_read_file("yok.txt");
	}
	catch (const std::exception& ex) {
		std::cout << "exception caught: " << ex.what() << '\n';
	}
}
