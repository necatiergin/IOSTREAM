#include <sstream>
#include <fstream>

int main()
{
	std::string name{ "necati ergin" };
	
	std::ofstream("aaa.txt") << name << '\n';
	std::ofstream("aaa.txt", std::ios::app) << "ahmet aksoy\n";
}
