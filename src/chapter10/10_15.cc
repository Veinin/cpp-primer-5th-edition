#include <iostream>
using std::cout; using std::endl;

int main()
{
    int a = 1;
    auto sum = [a] (int b) { return a + b; };
    cout << sum(2) << endl;

    return 0;
}