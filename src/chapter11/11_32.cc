#include <iostream>
#include <map>
#include <set>

using std::cout; using std::endl; using std::string;
using std::map; using std::multimap; using std::multiset;

int main()
{
    multimap<string, string> authors = {
            { "alan", "DMA" },
            { "pezy", "LeetCode" },
            { "alan", "CLRS" },
            { "wang", "FTP" },
    };

    map<string, multiset<string>> order_authors;
    for (const auto &author : authors)
        order_authors[author.first].insert(author.second);

    for (const auto &author : order_authors) {
        cout << author.first << ": ";
        for (const auto &work : author.second)
            cout << work << " ";
        cout << endl;
    }

    return 0;
}