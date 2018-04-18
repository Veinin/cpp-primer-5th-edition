#include <iostream>
using std::cout;

#include <string>
using std::string;

int main()
{
    string s = "Hello World!";

    for (char c : s)
        c = 'X';

    cout << s;  // Hello World!

    return 0;
}