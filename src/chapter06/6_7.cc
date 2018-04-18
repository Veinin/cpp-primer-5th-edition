#include <iostream>
using std::cout; using std::endl;

int count_call()
{
    static size_t ctr = 0;
    return ctr++;
}

int main()
{
    for (int i = 0; i < 10; i++)
        cout << count_call() << endl;
    return 0;
}