#include <iostream>
using std::cout; using std::endl;

int odd[] = {1, 3, 5, 7, 9};
int event[] = {0, 2, 4, 6, 8};

decltype(odd) &arrPtr(int i)
{
    return (i % 2) ? odd : event;
}

int main()
{
    cout << arrPtr(1)[0] << endl;
    cout << arrPtr(2)[0] << endl;
    return 0;
}