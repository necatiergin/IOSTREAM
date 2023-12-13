#include <iostream>
#include <limits>
#include <sstream>

class ignore_line {

public:
	ignore_line(int n) : mval {n} {}
	friend std::istream& operator>>(std::istream& is, const ignore_line &il)
	{
		for (int i = 0; i < il.mval; ++i)
			is.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		return is;
	}
private:
	int mval;
};



int main()
{
	using namespace std;

	istringstream iss{ "ali\nveli\nhasan" };
	string str;

	iss >> ignore_line(2) >> str;
	cout << "[" << str << "]\n";
}
