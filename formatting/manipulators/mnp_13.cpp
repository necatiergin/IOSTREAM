#include <iostream>

class fmguard {
public:
	fmguard(std::ostream& os) : 
		mos{ os },
		mflags{ os.flags() },
		mfill{ os.fill() },
	    mwidth{os.width()},
	    mprecision{os.precision()} {}

	~fmguard() { 
		mos.flags(mflags);
		mos.fill(mfill);
		mos.width(mwidth);
		mos.precision(mwidth);
	}
private:
	std::ostream& mos;
	//decltype(mos.flags()) mflags;
	std::ios_base::fmtflags mflags;
	char mfill;
	std::streamsize	mwidth;
	std::streamsize mprecision;
};
