#include <iostream>
#include <string>
#include <sstream>

int main()
{
    using namespace std;

    istringstream iss("Necati Ergin");
    std::string str;

    iss >> str;
    cout << "[" << str << "]\n";
    iss.seekg(0, ios_base::beg); 
    iss >> str;
    cout << "[" << str << "]\n";
    iss.seekg(1, ios_base::cur); 
    iss >> str;
    cout << "[" << str << "]\n";
    iss.seekg(-6, ios_base::cur); 
    iss >> str;
    cout << "[" << str << "]\n";
    iss.seekg(-6, ios_base::end); 
    iss >> str;
    cout << "[" << str << "]\n";
}
