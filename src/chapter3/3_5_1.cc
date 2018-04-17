#include <iostream>
#include <string>

using std::string;
using std::getline;

using std::cin;
using std::cout;
using std::endl;

int main()
{
    string buff;
    string temp;

    while (getline(cin, temp))
        if (!temp.empty())
            buff += temp;

    cout << buff;

    return 0;
}