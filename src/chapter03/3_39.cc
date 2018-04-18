#include <iostream>
using std::cout;
using std::endl;

#include <string>
using std::string;

#include <cstring>

int main()
{
    string s1 = "A string example";
    string s2 = "A different string";

    if (s1 < s2) {
        cout << "s1 < s2" << endl;
    } else if (s1 > s2) {
        cout << "s1 > s2" << endl;
    } else {
        cout << "s1 == s2" << endl;
    }

    const char ca1[] = "A string example";
    const char ca2[] = "A different string";
    auto result = strcmp(ca1, ca2);
    if (result < 0)
        cout << "ca1 < ca2" << endl;
    else if (result > 0)
        cout << "ca1 > ca2" << endl;
    else
        cout << "ca1 == ca2" << endl;

    return 0;
}