#include <iostream>
#include <limits>
#include <sstream>

std::istream&
ignore_line(std::istream& is)
{
	return is.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}


int main()
{
	using namespace std;

	int x;
	cout << "bir sayi giriniz: ";
	
	cin >> x; //345necati
	cout << "x = " << x << '\n';

	cout << "bir sayi daha giriniz: ";
	//cin.ignore(numeric_limits<streamsize>::max(), '\n');
	cin >> ignore_line >> x;
	

	cout << "x = " << x << '\n';
	
}
