#include <iostream>
#include <vector>
#include <algorithm>

using std::cout; using std::endl; using std::vector; using std::string;
using std::sort; using std::partition; using std::unique; using std::for_each;

inline
void elimDups(vector<string> &words)
{
    sort(words.begin(), words.end());
    auto it = unique(words.begin(), words.end());
    words.erase(it, words.end());
}

inline
string make_plural(size_t ctr, const string &word,
                   const string &ending)
{
    return (ctr > 1) ? word + ending : word;
}

void biggies(vector<string> &words, vector<string>::size_type sz)
{
    elimDups(words);

    auto it = partition(words.begin(), words.end(), [sz](const string &s) {
        return s.size() >= sz;
    });

    for_each(words.begin(), it,
             [](const string &s) { cout << s << " "; });

    cout << endl;

    for_each(it, words.end(),
             [](const string &s) { cout << s << " "; });
}

int main()
{
    vector<string> v{"the", "quick", "red", "fox", "jumps", "over", "the", "slow", "red","turtle"};
    biggies(v, 4);

    return 0;
}