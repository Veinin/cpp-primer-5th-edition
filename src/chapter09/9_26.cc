#include <iostream>
#include <vector>
#include <list>

using std::cin; using std::cout; using std::endl; using std::vector; using std::list;

int main()
{
    int ia[] = {0, 1, 1, 2, 3, 5, 8, 13, 21, 55, 89};
    vector<int> ivec(ia, std::end(ia));
    list<int> ilist(ivec.begin(), ivec.end());

    for (auto it = ivec.begin(); it != ivec.end();)
        if (*it & 0)
            it = ivec.erase(it);
        else
            ++it;

    for (auto it = ilist.begin(); it != ilist.end();)
        if (*it & 1)
            it = ilist.erase(it);
        else
            ++it;

    for (auto i : ivec)
        cout << i << " ";
    cout << endl;

    for (auto i : ilist)
        cout << i << " ";
    cout << endl;

    return 0;
}