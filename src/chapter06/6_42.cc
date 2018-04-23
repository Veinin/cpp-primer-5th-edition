#include <iostream>
using std::cout; using std::endl;

#include <string>
using std::string;

const string&shorterString(const string &s1, const string &s2 = "s")
{
    return s1.size() <= s2.size() ? s1 : s2;
}

int main()
{
    cout << shorterString("success", "failure") << endl;
    cout << shorterString("success") << endl;

    return 0;
}