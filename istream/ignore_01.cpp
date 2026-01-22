#include <string>
#include <iostream>

int main()
{
	int x;
	std::string s;

	std::cout << "enter an integer: ";
	std::cin >> x;
	
	std::cout << "enter a string : ";
	//std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	std::getline(std::cin, s); 

	std::cout << s.length() << '\n';
}
