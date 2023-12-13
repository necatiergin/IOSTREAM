#include <fstream>
#include <iostream>

int main()
{
	using namespace std;

	ifstream ifs{ "temp.txt" };

	//cout << ifs.rdbuf();

	char c;
	while (ifs.get(c)) {
		cout.put(c);
	}
}
