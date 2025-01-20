#include <fstream>
#include <iostream>
#include <sstream>
#include <iomanip>


//dbir  ahmet.exe

int main(int argc, char* argv[])
{
	using namespace std;

	if (argc != 2) {
		std::cerr << "kullanim: <dbir> <dosya ismi>";
		return 1;
	}

	std::ofstream ofs{ argv[1], std::ios::binary};
	if (!ofs) {
		std::cerr << "dosya olusturulamadi : " << argv[1];
		return 2;
	}

	int file_count{};

	while (true) {
		ostringstream ostr;
		ostr << setfill('0');
		ostr << "parca" << setw(3) << file_count + 1 << ".par";
		ifstream ifs{ ostr.str(), ios::binary };
		if (!ifs) {
			break;
		}

		char c;

		while (ifs.get(c)) {
			ofs.put(c);
		}
		++file_count;
		ifs.close();
		if (remove(ostr.str().c_str())) {
			cerr << "dosya silinemedi\n";
			return 3;
		}
	}

}
