#include <iostream>
#include <forward_list>

using std::cin; using std::cout; using std::endl; using std::forward_list;

int main()
{
    forward_list<int> l = {0, 1, 1, 2, 3, 5, 8, 13};
    auto prev = l.before_begin();
    auto curr = l.begin();
    while (curr != l.end()) {
        if (*curr & 1)
            curr = l.erase_after(prev);
        else {
            prev = curr;
            ++curr;
        }
    }

    for (auto i : l)
        cout << i << " ";
    cout << endl;

    return 0;
}