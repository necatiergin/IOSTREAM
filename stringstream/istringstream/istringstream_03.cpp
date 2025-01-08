#include <string>
#include <iostream>
#include <vector>
#include <sstream>
#include <iomanip>
#include <algorithm>

int main()
{
	using std::cout, std::cin, std::string;

	string str;
	cout << "enter a sentence: ";
	getline(cin, str);

	std::istringstream iss{ str };

	string word;

	int cnt{};

	std::vector<string> svec;
	while (iss >> word) {
		std::cout << std::setw(2) << ++cnt << " " << word << '\n';
		svec.push_back(std::move(word));
	}

	sort(begin(svec), end(svec));
	std::copy(svec.begin(), svec.end(), std::ostream_iterator<string>{cout, " "});
}
