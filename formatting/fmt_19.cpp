#include <iostream>
#include <iomanip>


int main()
{
	int x;

	std::cout << "bir tamsayi giriniz (oct) : ";
	std::cin >> std::oct >> x;
	std::cout << "x = " << x << '\n';
	std::cout << "bir tamsayi giriniz (hex) : ";
	std::cin >> std::hex >> x;
	std::cout << "x = " << x << '\n';
}
