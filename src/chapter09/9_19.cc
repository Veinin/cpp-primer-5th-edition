#include <iostream>
#include <string>
#include <list>

using std::cin; using std::cout; using std::endl; using std::list; using std::string;

int main()
{
    list<string> input;
    string str;
    while (cin >> str)
        input.push_back(str);

    for (auto iter = input.cbegin(); iter != input.cend(); ++iter)
        cout << *iter << endl;

    return 0;
}