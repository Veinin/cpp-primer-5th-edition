#include <iostream>
using std::cout; using std::endl;

#include <string>
using std::string;

inline bool isShorter(const string &s1, const string &s2)
{
    return s1.size() < s2.size();
}

int main()
{
    cout << isShorter("veinin", "guo") << endl;

    return 0;
}