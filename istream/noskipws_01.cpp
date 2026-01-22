#include <iostream>

int main()
{
	char c;
	std::cin >> std::noskipws >> c;	  // input space enter
	
	std::cout << "c = " << static_cast<int>(c) << '\n';
}
