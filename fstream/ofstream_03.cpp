#include <sstream>
#include <fstream>

int main()
{
	using namespace std;
	string name{ "necati ergin" };
	ofstream("aaa.txt") << name << '\n';
	ofstream("aaa.txt", ios::app) << "Ahmet Aksoy\n";
}
