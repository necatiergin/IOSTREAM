#include <iostream>
#include <sstream>


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
	std::cout << "============================\n";
}


int main()
{
	std::istringstream iss;

	display_state(iss);
	iss.setstate(std::ios::eofbit);
	display_state(iss);
	iss.setstate(std::ios::failbit);
	display_state(iss);
	iss.setstate(std::ios::badbit);
	display_state(iss);
}
