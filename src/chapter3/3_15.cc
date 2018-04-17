#include <iostream>
using std::cin;
using std::cout;

#include <vector>
using std::vector;

#include <string>
using std::string;

int main()
{
    vector<string> svec;
    string str;

    while(cin >> str)
        svec.push_back(str);

    for (auto &v : svec)
        cout << v << " ";

    return 0;
}