#include <iostream>

int main()
{
    int a = 0, b = 1;
    int *pa = &a, *pb = pa;

    pb = &b;
    *pa = 2;

    std::cout << *pa << " " << *pb; // 2 1

    return 0;
}