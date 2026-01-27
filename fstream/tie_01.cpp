#include <iostream>

int main()
{
	if (auto osptr = std::cin.tie()) {
		std::cout << "cin is tied. the address of the stream cin tied to is : " << osptr << '\n';
		std::cout << "&cout = " << &cout << '\n';
	}
	else {
		std::cout << "cin not tied to any output stream\n";
	}
}
