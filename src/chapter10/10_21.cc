#include <iostream>
#include <vector>
#include <algorithm>

using std::cout; using std::endl; using std::vector; using std::string;
using std::count_if;

int main()
{
    int len = 6;
    vector<string> v{"aaaa", "bbbbbb", "ccccccc"};
    cout << count_if(v.begin(), v.end(), [&](const string &s) { return s.size() > len; });

    return 0;
}