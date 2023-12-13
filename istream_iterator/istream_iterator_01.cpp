#include <iostream>
#include <iterator>
#include <vector>
#include <fstream>
#include <algorithm>

int main()
{
	using namespace std;
	ifstream ifs{ "isimler.txt" };
	if (!ifs) {
		cerr << "dosya acilamadi\n";
		return 1;
	}
	//vector<string> svec{ istream_iterator<string>{ifs}, istream_iterator<string>{} };
	vector<string> svec{ istream_iterator<string>{ifs}, {} };
	copy(begin(svec), end(svec), ostream_iterator<string>{cout, " "});
}
