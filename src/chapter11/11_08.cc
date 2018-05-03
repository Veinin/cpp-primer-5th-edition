#include <iostream>
#include <vector>

using std::cin; using std::cout; using std::endl; using std::string;
using std::vector;

int main()
{
    vector<string> svec = {"aa", "aa", "bb", "bb", "bbb"};
    for (const auto &s : svec)
        cout << s << " ";
    cout << endl;

    return 0;
}