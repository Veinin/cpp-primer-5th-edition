#include <iostream>
#include <string>

using std::cout; using std::endl; using std::string;

void replace(string &s, const string &oldVal, const string &newVal)
{
    for (size_t i = 0; i < s.size();) {
        if (s[i] == oldVal[0] && s.substr(i, oldVal.size()) == oldVal) {
            s.replace(i, oldVal.size(), newVal);
            i += newVal.size();
        } else {
            ++i;
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
