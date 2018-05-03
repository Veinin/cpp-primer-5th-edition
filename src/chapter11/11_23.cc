#include <iostream>
#include <map>
#include <set>
#include <vector>

using std::cout; using std::endl; using std::string;
using std::multimap; using std::vector; using std::pair; using std::make_pair;

using Child = pair<string, string>;
using Children = vector<Child>;
using Families = multimap<string, Children>;

int main()
{
    Families families;
    families.insert({"fn", {make_pair("ln", "2014-01-02")}});
    families.insert({"fn", {make_pair("ln1", "2015-02-02")}});

    families.insert({"fn1", {make_pair("ln2", "2016-02-02")}});

    for (const auto &family : families) {
        cout << family.first << " :\n";
        for (const auto &child : family.second)
            cout << child.first << " " << child.second << "\n";
        cout << endl;
    }

    return 0;
}