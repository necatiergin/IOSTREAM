#include <iostream>
#include <iterator>
#include <vector>
#include <fstream>
#include <algorithm>

int main()
{
	std::ifstream ifs{ "names.txt" };
	if (!ifs) {
		std::cerr << "cannot open file\n";
		return 1;
	}
	//std::vector<std::string> svec{ std::istream_iterator<std::string>{ifs}, {} };
	std::vector<std::string> svec{ std::istream_iterator<std::string>{ifs}, {} };
	copy(begin(svec), end(svec), std::ostream_iterator<std::string>{std::cout, " "});
}
