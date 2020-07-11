#include <iostream>

void print_range(int low, int high)
{
    if (low > high)
        print_range(high, low);

    for (int i = low; i <= high; i++)
            std::cout << low++ << " ";
}

int main()
{
    int low = 0, high = 0;
    std::cout << "Please input two integers:\n";
    std::cin >> low >> high;
    print_range(low, high);
    return 0;
}
