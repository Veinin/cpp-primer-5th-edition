#include <iostream>

int main()
{
    int sum = 0;
    for (int i = -100; i <= 100; ++i)
        sum += i;
    std::cout << "The value of sum is : " << sum;   // zero
    return 0;
}