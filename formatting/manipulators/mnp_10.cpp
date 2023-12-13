#include <iostream>
#include <iomanip>

int main()
{
	char name[10];

	std::cout << "bir isim girin: ";
	std::cin >> std::setw(10) >> name;
	std::cout << "isim : " << name << '\n';
}
