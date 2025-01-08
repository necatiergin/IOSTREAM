#include <iostream>
#include <iomanip>

void display_state(const std::ios& s)
{
	const auto stream_state = s.rdstate();
	if (stream_state == 0) {
		std::cout << "stream is OK\n";
		return;
	}

	if (stream_state & std::ios::failbit) {
		std::cout << "fail bit is set\n";
	}

	if (stream_state & std::ios::eofbit) {
		std::cout << "eof bit is set\n";
	}

	if (stream_state & std::ios::badbit) {
		std::cout << "bad bit is set\n";
	}
}


int main()
{
	display_state(std::cin);

	int ival;
	std::cout << "enter an integer: ";
	std::cin >> ival;

	display_state(std::cin);
}
