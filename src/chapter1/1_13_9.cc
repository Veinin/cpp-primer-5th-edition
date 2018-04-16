#include <iostream>

auto sum(int s, int e)
{
    int sum = 0;
    for (int i = s; i <= e; i++)
        sum += i;
    return sum;
}

int main()
{
    std::cout << "Sum of 50 to 100 inclusive is " << sum(50, 100);
    return 0;
}