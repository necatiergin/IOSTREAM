#include <string>
#include <iostream>
#include <sstream>
#include <vector>
#include <algorithm>
#include <iostream>

int main()
{
	using namespace std;

	string str;
	cout << "sayilar giriniz: ";
	getline(cin, str);

	istringstream iss{ str };

	vector<int> ivec{ istream_iterator<int>{iss}, {} };

	cout << "ivec.size() = " << ivec.size() << '\n';
	sort(ivec.begin(), ivec.end(), greater{});
	copy(ivec.begin(), ivec.end(), ostream_iterator<int>{cout, " "});
}
