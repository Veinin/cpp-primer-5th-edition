#include <iostream>
using std::cout; using std::endl;

int main()
{
    auto sum = [] (int a, int b) { return a + b; };
    cout << sum(1, 2) << endl;

    return 0;
}