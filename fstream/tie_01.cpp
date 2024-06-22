#include <iostream>

int main()
{
	using namespace std;

	if (auto osptr = cin.tie()) {
		cout << "cin is tied. the address of the stream cin tied to is : " << osptr << '\n';
		cout << "&cout = " << &cout << '\n';
	}
	else {
		cout << "cin not tied to any output stream\n";
	}
}
