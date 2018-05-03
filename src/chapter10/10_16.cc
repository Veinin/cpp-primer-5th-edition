#include <iostream>
#include <vector>
#include <algorithm>

using std::cout; using std::endl; using std::vector; using std::string;
using std::sort; using std::stable_sort; using std::unique; using std::for_each; using std::find_if;

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

inline
void print(const vector<string> &words)
{
    for_each(words.begin(), words.end(),
             [](const string &s) { cout << s << " "; });
    cout << endl;
}

void biggies(vector<string> &words, vector<string>::size_type sz)
{
    elimDups(words);
    stable_sort(words.begin(), words.end(), [](const string &a, const string &b) {
        return a.size() < b.size();
    });

    auto wc = find_if(words.begin(), words.end(), [sz](const string &a) {
        return a.size() >= sz;
    });

    auto count = words.end() - wc;
    cout << count << " " << make_plural(count, "word", "s")
         << " of length " << sz << " or longer" << endl;

    print(words);
}

int main()
{
    vector<string> v{"the", "quick", "red", "fox", "jumps", "over", "the", "slow", "red","turtle"};
    biggies(v, 4);

    return 0;
}