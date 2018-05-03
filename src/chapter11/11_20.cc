#include <iostream>
#include <map>
#include <set>

using std::cin; using std::cout; using std::endl; using std::string;
using std::map; using std::set;

int main()
{
    map<string, size_t> word_count;
    set<string> exclude = {"The", "But", "And", "Or", "An"};

    string word;
    while(cin >> word)
        if (exclude.find(word) == exclude.end()) {
            auto ret = word_count.insert({word, 1});
            if (!ret.second)
                ++ret.first->second;
        }

    for (const auto &w : word_count)
        cout << w.first << " occurs " << w.second
             << ((w.second > 1) ? " times" : " time") << endl;

    return 0;
}