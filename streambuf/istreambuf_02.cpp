#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
	using namespace std;

	ifstream ifs{ "main.cpp" };
	if (!ifs) {
		cerr << "cannot open file!";
		return 1;
	}

	string str{ istreambuf_iterator<char>{ifs}, {} };
	
	erase_if(str, [](char c) {return isspace(c); });

	cout << str;
}
