#include <sstream>
#include <iostream>
#include <numeric>
#include <algorithm>
#include <iterator>

int main()
{
	using std::cout, std::hex, std::istream_iterator,
		std::string;

	std::istringstream iss{ "34 56 78 91 45 20 6 3 56 90" };

	cout << accumulate(istream_iterator<int>{iss}, {}, 0) << '\n';
	iss.clear();
	iss.seekg(0);
	iss >> hex;
	cout << accumulate(istream_iterator<int>{iss}, {}, 0) << '\n';
	iss.clear();
	iss.seekg(0);
	auto s = accumulate(istream_iterator<string>{iss}, {}, string{});
	std::reverse(s.begin(), s.end());
	cout << s << '\n';
}
