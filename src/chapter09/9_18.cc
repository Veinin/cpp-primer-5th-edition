#include <iostream>
#include <string>
#include <deque>

using std::cin; using std::cout; using std::endl; using std::deque; using std::string;

int main()
{
    deque<string> input;
    string str;
    while (cin >> str)
        input.push_back(str);

    for (auto iter = input.cbegin(); iter != input.cend(); ++iter)
        cout << *iter << endl;

    return 0;
}