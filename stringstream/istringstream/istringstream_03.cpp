#include <string>
#include <iostream>
#include <vector>
#include <sstream>
#include <iomanip>
#include <algorithm>

int main()
{
	using namespace std;

	string str;
	cout << "enter a sentence: ";
	getline(cin, str);

	istringstream iss{ str };

	string word;

	int cnt{};

	vector<string> svec;
	while (iss >> word) {
		cout << setw(2) << ++cnt << " " << word << '\n';
		svec.push_back(std::move(word));
	}

	sort(begin(svec), end(svec));
	std::copy(svec.begin(), svec.end(), ostream_iterator<string>{cout, " "});
}
