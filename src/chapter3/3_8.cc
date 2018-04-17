#include <iostream>
using std::cout; using std::endl;

#include <string>
using std::string;

int main()
{
    string s = "Hello World!";

    decltype(s.size()) i = 0;
    while (i < s.size())
        s[i++] = 'X';
    cout << s << endl;

    for (i = 0; i < s.size(); i++)
        s[i] = 'Y';
    cout << s;

    // I like range for
    return 0;
}