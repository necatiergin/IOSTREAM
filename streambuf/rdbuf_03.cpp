#include <iostream>
#include <sstream>

int main()
{
    std::ostringstream oss;

    auto cout_buff = std::cout.rdbuf();
    std::cout.rdbuf(oss.rdbuf());
    std::cout << "necati ergin";
    std::cout.rdbuf(cout_buff);
    std::cout << "ahmet ibrahim aksoy\n";
    std::cout << "local content: " << oss.str() << '\n';
}
