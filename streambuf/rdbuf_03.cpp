#include <iostream>
#include <sstream>

int main()
{
    using namespace std;

    ostringstream oss;

    auto cout_buff = cout.rdbuf();
    cout.rdbuf(oss.rdbuf());
    cout << "necati ergin";

    cout.rdbuf(cout_buff);
    cout << "ahmet ibrahim aksoy\n";
    cout << "local content: " << oss.str() << '\n';
}
