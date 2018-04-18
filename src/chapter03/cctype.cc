#include <iostream>
using std::cout; using std::endl;

#include <cctype>
using std::isupper; using std::toupper;
using std::islower; using std::tolower;
using std::isalpha; using std::isspace;

#include <string>
using std::string;

int main()
{
    string s("Hello World!!!");
    decltype(s.size()) punct_cnt = 0;

    // count the number of punctuation characters in s
    for (auto c : s)
        if (ispunct(c))
            ++punct_cnt;

    cout << punct_cnt << " punctuation characters in " << s << endl;

    // convert s to uppercase
    string orig = s;
    for (auto &c : orig)
        c = toupper(c);
    cout << orig << endl;

    // convert first word in s to uppercase
    s = "some string";
    decltype(s.size()) index = 0;

    while (index != s.size() && !isspace(s[index])) {
        s[index] = toupper(s[index]);
        ++index;
    }

    cout << s << endl;

    return 0;
}