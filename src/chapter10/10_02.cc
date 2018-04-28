#include <iostream>
#include <algorithm>
#include <vector>

using std::cout; using std::endl; using std::vector; using std::count; using std::string;

int main()
{
    vector<string> v{"aa", "bb", "aa"};
    cout << count(v.cbegin(), v.cend(), "aa") << endl;

    return 0;
}