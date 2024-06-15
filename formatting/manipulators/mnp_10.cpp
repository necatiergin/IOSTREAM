#include <iostream>
#include <iomanip>

int main()
{
	char name[5];

	std::cout << "bir isim girin: ";
	std::cin >> std::setw(5) >> name;
	std::cout << "isim : " << name << '\n';
}
