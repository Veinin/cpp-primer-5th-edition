#include <iostream>
#include <map>

using std::cout; using std::endl; using std::string;
using std::multimap;

int main()
{
    multimap<string, string> authors = {
            { "alan", "DMA" },
            { "pezy", "LeetCode" },
            { "alan", "CLRS" },
            { "wang", "FTP" },
    };

    string author = "alan";
    string work = "CLRS";

    auto count = authors.count(author);
    auto it = authors.find(author);

    while (count) {
        if (it->second == work) {
            authors.erase(it);
        }

        --count;
        ++it;
    }

    for (const auto &v : authors)
        cout << v.first << " " << v.second << endl;

    return 0;
}