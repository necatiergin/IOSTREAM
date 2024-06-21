#include <iostream>
#include <iterator>
#include <numeric>

using namespace std;

int main()
{
	cout << "enter the numbers: " << 
	accumulate(istream_iterator<int>{cin}, {}, 0) << '\n';
}
