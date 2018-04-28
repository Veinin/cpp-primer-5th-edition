#include <iostream>
#include <forward_list>

using std::cin; using std::cout; using std::endl; using std::forward_list; using std::string;

void find_and_insert(forward_list<string> &list, const string &find, const string &add) {
    for (auto it = list.begin(); it != list.end(); ++it) {
        if (*it == find) {
            list.insert_after(it, add);
            return;
        }
    }
    list.insert_after(list.end(), add);
}

int main()
{
    forward_list<string> l = {"hehe", "haha", "666"};
    find_and_insert(l, "hehe", "yaya");
    find_and_insert(l, "aaa", "enen");

    for (auto s : l)
        cout << s << " ";
    cout << endl;

    return 0;
}