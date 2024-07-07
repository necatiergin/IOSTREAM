#include <iomanip>
#include <iostream>

int main()
{
	using namespace std;
	
	cout << quoted("necati ergin") << '\n';
	cout << quoted("\"selami\"") << '\n';

	cout << quoted("necati ergin", '*') << '\n';
	cout << quoted("isim: *necati ergin*", '*') << '\n';
	cout << quoted("isim: *necati ergin*", '*', '|') << '\n';
}
