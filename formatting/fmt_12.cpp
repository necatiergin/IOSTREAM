#include <iostream>

std::ostream& dline(std::ostream& os)
{
	return os << "\n----------------------------------------------------------------\n";
}

int main()
{
	std::cout << 234 << dline << 123 << dline << 789 << dline;
}
