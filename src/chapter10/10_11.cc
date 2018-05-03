#include <iostream>
#include <vector>
#include <algorithm>

using std::cout; using std::endl; using std::vector; using std::string;
using std::sort; using std::stable_sort; using std::unique;

void print(const vector<string> &v)
{
    for (const auto &s : v)
        cout << s << " ";
    cout << endl;
}

void elimDups(vector<string> &v)
{
    sort(v.begin(), v.end());
    auto end_unique = unique(v.begin(), v.end());
    v.erase(end_unique);
}

bool is_shorter(const string &lhs, const string &rhs)
{
    return lhs.size() < rhs.size();
}

int main()
{
    vector<string> v{"the", "quick", "red", "fox", "jumps", "over", "the", "slow", "red","turtle"};
    elimDups(v);
    print(v);

    stable_sort(v.begin(), v.end(), is_shorter);
    print(v);

    return 0;
}