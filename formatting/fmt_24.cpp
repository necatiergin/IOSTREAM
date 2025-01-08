#include <iomanip>
#include <iostream>
#include <type_traits>
#include <string>

int main()
{
	auto s = std::quoted("\"ali\"");

	constexpr auto b = std::is_same_v<decltype(s), std::string>;

	std::cout << std::boolalpha << b; //false
	
}
