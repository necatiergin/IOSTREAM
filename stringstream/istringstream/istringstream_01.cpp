#include <sstream>
#include <iostream>

int main()
{
	using namespace std;

	string sline;
	cout << "enter a sentence: ";
	getline(cin, sline);
	istringstream iss(sline);
	string word;
	while (iss >> word)
		cout << word << '\n';
}
