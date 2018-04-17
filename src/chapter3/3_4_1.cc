#include <iostream>
#include <string>

using std::string;
using std::getline;

using std::cin;
using std::cout;
using std::endl;

int main()
{
    string s1, s2;
    cin >> s1 >> s2;

    if (s1 == s2)
        cout << "The two string are equal." << endl;
    else
        cout << "The tow string is not equal." << endl;

    return 0;
}