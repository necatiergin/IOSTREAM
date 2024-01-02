#include <tuple>
#include <iostream>
#include <string>
#include <sstream>

using name = std::tuple<std::string, std::string, std::string>;


name get_names(const std::string& str)
{
	std::string name, middle_name, surname;
	std::istringstream(str) >> name >> middle_name >> surname;
	if (surname.empty())
		return { name, "", middle_name };

	return { name, middle_name, surname };
}

int main()
{
	auto [name, middle_name, surname] = get_names("ahmet ibrahim aksoy");
	//auto [name, middle_name, surname] = get_names("ahmet aksoy");

	std::cout << name << " " << middle_name << " " << surname << "\n";
}
