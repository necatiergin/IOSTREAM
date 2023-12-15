//alıntı C++ faqs

#include <iostream>
#include <limits>

int main()
{
    using namespace std;

    int age{};

    while ((cout << "How old are you? ") && !(cin >> age)) {
        cout << "That's not a number; ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    cout << "You are " << age << " years old\n";
}
