#include <fstream>
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include "nutility.h"

int main()
{
	using namespace std;
	ofstream ofs{ "isimler.txt" };
	if (!ofs) {
		cerr << "dosya olusturulamadi\n";
		return 1;
	}
	vector<string> svec(2000);
	generate(begin(svec), end(svec), rname);
	size_t n;
	cout << "uzunluk: ";
	cin >> n;
	copy_if(svec.begin(), svec.end(), ostream_iterator<string>{ofs, "\n"},
	[n](const auto& s) {return s.size() == n; });
}
