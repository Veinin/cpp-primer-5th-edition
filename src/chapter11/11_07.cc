#include <iostream>
#include <map>
#include <set>
#include <vector>

using std::cin; using std::cout; using std::endl; using std::string;
using std::map; using std::set; using std::vector;

int main()
{
    map<string, vector<string>> families;
    families["fn1"].push_back("ln");
    families["fn1"].push_back("ln2");
    families["fn1"].push_back("ln3");

    families["fn2"].push_back("ln2");
    families["fn2"].push_back("ln3");

    for (const auto &family : families) {
        cout << family.first << " : ";
        for (const auto &child : family.second)
            cout << child << " ";
        cout << endl;
    }

    return 0;
}