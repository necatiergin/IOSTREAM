#include <fstream>
#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

int main()
{
	std::ifstream ifs{ "ali.txt" };
	if (!ifs) {
		std::cerr << "dosya acilamadi\n";
		return 1;
	}

	std::map<char, int> cmap;
	char c;

	while (ifs.get(c)) {
		if (isalpha(c))
			++cmap[toupper(c)];
	}

	std::vector<std::pair<char, int>> cvec{ begin(cmap), end(cmap) };
	sort(begin(cvec), end(cvec), [](const auto& p1, const auto& p2) 
		{
			return p1.second > p2.second; 
		});
	
	for (const auto [letter, count] : cvec)
		std::cout << letter << "  " << count << '\n';
}
