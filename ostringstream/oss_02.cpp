#include <string>
#include <ctime>
#include <sstream>
#include <iomanip>
#include <iostream>

std::string get_current_time()
{
	using namespace std;

	time_t timer{};
	time(&timer);
	tm* const p = localtime(&timer);
	ostringstream oss;
	oss.fill('0');

	oss << setw(2) << p->tm_mday << "_" << setw(2) << p->tm_mon + 1 <<
		"_" << p->tm_year + 1900 << "_" << setw(2) << p->tm_hour << "_"
		<< setw(2) << p->tm_min << "_" << setw(2) << p->tm_sec;

	return oss.str();
}


int main()
{
	auto stime = get_current_time();

	std::cout << "[" << stime << "]\n";
}
