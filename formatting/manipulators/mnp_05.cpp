#include <iostream>

class fmguard {
public:
	fmguard(std::ostream& os) : mos(os), mflags(os.flags()) {}
	~fmguard() { mos.flags(mflags); }
private:
	std::ostream& mos;
	//decltype(mos.flags()) mflags;
	std::ios_base::fmtflags mflags;
};


int main()
{
	using namespace std;	
	{
		fmguard _(cout);
		cout << uppercase << left << hex << boolalpha;
		cout << (10 > 5) << " " << 54701 << "\n";
		////
	}

	cout << (10 > 5) << " " << 54701 << "\n";

}
