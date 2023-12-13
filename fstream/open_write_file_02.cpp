#include <fstream>
#include <string>
#include <stdexcept>

std::ofstream open_write_file(const std::string &name)
{
	std::ofstream ofs(name);
	if (!ofs)
		throw std::runtime_error{"cannot create file: " + name};

	return ofs;
}

int main()
{
	auto ofs = open_write_file("nec.txt");
	ofs << "necati ergin";

	open_write_file("out.txt") << "necati ergin";
}
