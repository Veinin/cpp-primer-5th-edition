#include <iostream>
#include <map>
#include <vector>
#include <utility>

using std::cin; using std::cout; using std::endl; using std::string;
using std::map; using std::vector; using std::pair;

int main()
{
    map<string, vector<int>> m;
    pair<map<string, vector<int>>::iterator, bool> ret = m.insert({"hello", {1, 2}});

    return 0;
}