#include <iostream>
#include <string>

using std::cout; using std::endl; using std::string;

void replace(string &s, const string &oldVal, const string &newVal)
{
    for (auto it = s.begin(); it != s.end();) {
        if (oldVal == string(it, it + oldVal.size())) {
            it = s.erase(it, it + oldVal.size());
            s.insert(it, newVal.cbegin(), newVal.cend());
            it += newVal.size();
        } else {
            ++it;
        }
    }
}

int main()
{
    string s("Jazz survive, eliminate OKC in Game 6");
    replace(s, "Jazz", "Houston");
    cout << s << endl;

    return 0;
}
