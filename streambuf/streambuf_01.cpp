#include <iostream>
#include <type_traits>

int main()
{
	using type1 = std::streambuf;
	using type2 = std::basic_streambuf<char, std::char_traits<char>>;

	static_assert(std::is_same_v<type1, type2>);   //holds
}
