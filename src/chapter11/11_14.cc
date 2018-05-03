#include <iostream>
#include <map>
#include <set>
#include <vector>
#include <utility>

using std::cout; using std::endl; using std::string;
using std::map; using std::vector; using std::pair; using std::make_pair;

using Child = pair<string, string>;
using Children = vector<Child>;
using Families = map<string, Children>;

int main()
{
    Families families;
    families["fn"].push_back(make_pair("ln", "2014-01-02"));
    families["fn"].push_back(make_pair("ln1", "2015-02-02"));

    families["fn1"].emplace_back("ln2", "2016-02-02");

    for (const auto &family : families) {
        cout << family.first << " :\n";
        for (const auto &child : family.second)
            cout << child.first << " " << child.second << "\n";
        cout << endl;
    }

    return 0;
}