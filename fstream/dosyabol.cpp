#include <iostream>
#include <fstream>
#include <sstream>
#include <iomanip>

int main(int argc, char* argv[])
{
	using namespace std;

	if (argc != 3) {
		cerr << "kullanim: <dbol> <dosya ismi> <boyut byte>\n";
		return 1;
	}

	ifstream ifs{ argv[1], ios::binary };
	if (ifs.fail()) {
		cerr << argv[1] << " dosyasi acilamadi\n";
		return 2;
	}

	char c; //okuma ve yazma icin
	int file_count{};  //olusturulacak dosyalarin sayisi
	int byte_count{};  //okunan byte sayisi

	int chunk{ atoi(argv[2]) };
	ofstream ofs;
	ostringstream ostr;
	ostr.fill('0');

	while (ifs.get(c)) {
		if (!ofs.is_open()) { //yeni dosya olusturmamiz gerekiyor
			ostr << "parca" << setw(3) << file_count + 1 << ".par";
			ofs.open(ostr.str(), ios::binary);
			if (ofs.fail()) {
				cerr << ostr.str() << "isimli dosya olusturulamadi\n";
				return 3;
			}
			++file_count;
		}
		ofs.put(c);
		++byte_count;
		if (byte_count % chunk == 0) {
			ofs.close();
			ostr.str("");
		}
	}

	cout << byte_count << " byte'lik " << argv[1] << " isimli dosya " <<
		chunk << " byte'lik " << file_count << " parcaya bolundu\n";

}
