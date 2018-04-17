#include <iostream>
using std::cin; using std::cout; using std::endl;

#include <vector>
using std::vector;

#include <string>
using std::string;

#include <cctype>
using std::toupper;

int main()
{
    vector<string> svec;
    string s;

    while (cin >> s) {
        for (auto &c : s)
            c = toupper(c);

        svec.push_back(s);
    }

    for (auto &v : svec)
        cout << v << endl;

    return 0;
}