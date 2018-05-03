#include <iostream>
#include <map>

using std::cout; using std::endl; using std::string;
using std::map;

int main()
{
    map<int, string> m;
    m[10] = "Veinin";

    auto it = m.begin();
    it->second = "Guo";

    return 0;
}