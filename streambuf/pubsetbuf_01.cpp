#include <fstream>
#include <vector>

int main() 
{
	std::vector<char> buffer(512);

	std::fstream fs;
	fs.rdbuf()->pubsetbuf(&buffer.front(), buffer.size());

	fs << "Hello, World!\n";
}
