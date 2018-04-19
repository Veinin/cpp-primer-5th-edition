#include <iostream>
using std::cout; using std::endl;

int max(const int a, const int *b)
{
    return a > *b ? a : *b;
}

int main()
{
    int i = 10;
    cout << max(5, &i);

    return 0;
}