#include <iostream>
using std::cout; using std::endl;
using std::initializer_list;

int count(const initializer_list<int> &list)
{
    auto sum = 0;
    for (auto i : list)
        sum += i;
    return sum;
}

int main()
{
    initializer_list<int> list{1, 2, 3, 4, 5};
    cout << count(list) << endl;

    return 0;
}