#include <iostream>
#include <map>
#include <set>
#include <algorithm>
#include <cctype>

using std::cin; using std::cout; using std::endl; using std::string;
using std::map; using std::set;
using std::transform;
using std::tolower;

int main()
{
    map<string, size_t> word_count;
    set<string> exclude = {"the", "but", "and", "or", "an"};

    string word;
    while(cin >> word) {
        transform(word.begin(), word.end(), word.begin(),
                  [](unsigned char c) -> unsigned char { return tolower(c); });

        cout << word << endl;

        if (exclude.find(word) == exclude.end())
            ++word_count[word];
    }

    for (const auto &w : word_count)
        cout << w.first << " occurs " << w.second
             << ((w.second > 1) ? " times" : " time") << endl;

    return 0;
}