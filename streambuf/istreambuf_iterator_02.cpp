#include <iostream>
#include <string>
#include <fstream>

int main()
{
	std::ifstream ifs{ "main.cpp" };
	if (!ifs) {
		std::cerr << "cannot open file!";
		return 1;
	}

	std::string str{ std::istreambuf_iterator<char>{ifs}, {} };

	erase_if(str, [](char c) {return isspace(c); });

	std::cout << str;
}
