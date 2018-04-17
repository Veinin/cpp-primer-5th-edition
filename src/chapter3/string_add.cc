#include <iostream>
#include <string>

using std::string;
using std::cout; using std::endl;

int main()
{
    string s1 = "hello, ", s2 = "world\n";
    string s3 = s1 + s2;
    cout << s1 << s2 << s3 << endl;

    s1 += s2;
    cout << s1 << endl;

    string s4 = "hello", s5 = "world";
    string s6 = s4 + ", " + s5;
    cout << s4 << s5 << "\n" << s6 << endl;

    return 0;
}