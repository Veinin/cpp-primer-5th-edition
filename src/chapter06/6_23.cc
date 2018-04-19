#include <iostream>
using std::cout; using std::endl;
using std::begin; using std::end;

void print(const int *p)
{
    cout << *p << endl;
}

void print(const int ia[], size_t size)
{
    for (size_t i = 0; i != size; ++i)
        cout << ia[i] << endl;
}

void print(int (&arr)[2])
{
    for (auto i : arr)
        cout << i << endl;
}

void print(const int *beg, const int *end)
{
    while(beg != end)
        cout << *beg++ << endl;
}

int main()
{
    int i = 0, j[2] = {0, 1};

    print(&i);
    print(j);
    print(j, end(j) - begin(j));
    print(begin(j), end(j));

    return 0;
}