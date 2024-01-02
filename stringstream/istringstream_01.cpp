#include <sstream>
#include <iostream>

int main()
{
	using namespace std;

	string sline;
	cout << "bir cumle girin: ";
	getline(cin, sline);
	istringstream iss(sline);
	string word;
	while (iss >> word)
		cout << word << '\n';
}
