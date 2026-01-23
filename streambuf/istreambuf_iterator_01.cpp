#include <vector>
#include <sstream>
#include <iostream>
#include <iterator>

int main()
{
    std::istringstream iss("Necati Ergin");

    std::vector<char> cvec((std::istreambuf_iterator<char>(iss)), {});
    std::cout << "cvec.size() = " << cvec.size() << '\n';
    cvec.push_back('\0');
    std::cout << "[" << cvec.data() << "]" << '\n';
}
