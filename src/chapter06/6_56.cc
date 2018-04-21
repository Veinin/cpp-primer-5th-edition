#include <iostream>
using std::cout; using std::endl;

#include <vector>
using std::vector;

inline int add(int a, int b)
{
    return a + b;
}

inline int subtract(int a, int b)
{
    return a - b;
}

inline int multiply(int a, int b)
{
    return a * b;
}

inline int divide(int a, int b)
{
    return a / b;
}

int main()
{
    vector<decltype(add)*> vec{add, subtract, multiply, divide};
    for (auto f : vec)
        cout << f(1, 2) << endl;

    return 0;
}