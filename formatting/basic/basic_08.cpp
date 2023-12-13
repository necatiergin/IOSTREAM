#include <iostream>

using namespace std;

int main()
{
	double dval = 13.76515;
	//ios::floatfield
	//ios::fixed
	//ios::scientific
	//cout.setf(ios::fixed, ios::floatfield);
	//cout.setf(ios::scientific, ios::floatfield);
	cout.setf(ios::fixed | ios::scientific);
	cout << "ios::fixed : " << (cout.flags() & ios::fixed ? "set" : "unset") << '\n';
	cout << "ios::scientific : " << (cout.flags() & ios::scientific ? "set" : "unset") << '\n';

	cout << "dval = " << dval << "\n";
}

