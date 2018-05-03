#include <iostream>
#include <vector>
#include <algorithm>

using std::cout; using std::endl; using std::vector; using std::string;
using std::sort; using std::unique;

void print(const vector<string> &v)
{
    for (const auto &s : v)
        cout << s << " ";
    cout << endl;
}

int main()
{
    vector<string> v{"the", "quick", "red", "fox", "jumps", "over", "the", "slow", "red","turtle"};
    sort(v.begin(), v.end());
    print(v);

    auto end_unique = unique(v.begin(), v.end());
    print(v);

    v.erase(end_unique);
    print(v);

    return 0;
}