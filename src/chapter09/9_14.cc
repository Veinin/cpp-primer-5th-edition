#include <iostream>
#include <vector>
#include <list>

using std::cout;
using std::endl;
using std::string;
using std::vector;
using std::list;

int main()
{
    list<char*> list = {"Hello", "World"};
    vector<string> vec;
    vec.assign(list.begin(), list.end());

    for (const auto &s : vec)
        cout << s << endl;

    return 0;
}