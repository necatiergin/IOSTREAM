#include <fstream>
#include <iostream>
#include <map>
#include <cctype>
#include "nutility.h"
#include <vector>

int main()
{
	using namespace std;

	ifstream ifs{ "kayit.txt" };
	if (!ifs) {
		cerr << "dosya acilamadi\n";
		return 1;
	}

	map<char, int> cmap;
	char c;

	while (ifs.get(c)) {
		if (isalpha(c))
			++cmap[toupper(c)];
	}

	pc(cmap, "\n");
	vector<pair<char, int>> cvec{ begin(cmap), end(cmap) };
	sort(begin(cvec), end(cvec), [](const auto& p1, const auto& p2) {return p1.second > p2.second; });
	for (const auto& [letter, count] : cvec)
		cout << letter << "  " << count << "\n";
}
