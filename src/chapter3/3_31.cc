#include <iostream>
using std::cout;

int main()
{
    int a[10];

    for (int i = 0; i < 10; ++i)
        a[i] = i;

    for (auto i : a)
        cout << i << " ";

    return 0;
}