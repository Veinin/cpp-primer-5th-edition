#include <iostream>
#include "Sales_item.h"

int main()
{
    Sales_item total;

    if (std::cin >> total) {
        Sales_item temp;
        while (std::cin >> temp) {
            if (total.isbn() == temp.isbn()) {
                total += temp;
            } else {
                total = temp;
            }
            std::cout << total << std::endl;
        }
    } else {
        std::cerr << "No data!" << std::endl;
        return -1;
    }

    return 0;
}