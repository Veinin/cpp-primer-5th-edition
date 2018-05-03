#include <iostream>
#include <vector>
#include <utility>

using std::cin; using std::cout; using std::endl; using std::string;
using std::vector; using std::pair;

int main()
{
    vector<pair<string, int>> vec;

    string str;
    int i;
    while (cin >> str >> i) {
//        vec.push_back(pair<string, int>(str, i));
//        vec.push_back(std::make_pair(str, i));
//        vec.push_back({str, i});
        vec.emplace_back(str, i);   // easiest way
    }

    for (const auto &p : vec)
        cout << p.first << " " << p.second << endl;

    return 0;
}