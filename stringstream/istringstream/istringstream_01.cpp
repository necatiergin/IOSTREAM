#include <sstream>
#include <iostream>

int main()
{
	std::string sline;
	std::cout << "enter a sentence: ";
	getline(std::cin, sline);
	std::istringstream iss(sline);
	std::string word;
	while (iss >> word)
		std::cout << word << '\n';
}
