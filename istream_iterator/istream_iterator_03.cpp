#include <iostream>
#include <iterator>
#include <numeric>

int main()
{
	using namespace std;

	cout << "enter the numbers: " <<
		accumulate(istream_iterator<int>{cin}, {}, 0) << '\n';
}
