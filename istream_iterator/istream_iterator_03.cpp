#include <iostream>
#include <iterator>
#include <numeric>

using namespace std;

int main()
{
	cout << "sayilari giriniz: " << 
	accumulate(istream_iterator<int>{cin}, {}, 0) << '\n';
}
