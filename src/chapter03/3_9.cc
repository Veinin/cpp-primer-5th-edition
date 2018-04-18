#include <iostream>
using std::cout; using std::endl;

#include <string>
using std::string;

int main()
{
    string s;
    cout << s[0] << endl;   //s is empty, undefined behavior.

    return 0;
}