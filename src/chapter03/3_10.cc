#include <iostream>
using std::cin;
using std::cout;

#include <string>
using std::string;

#include <cctype>
using std::ispunct;

int main()
{
    string s;
    cin >> s;

    for (auto c : s)
        if (!ispunct(c))
            cout << c;

    return 0;
}