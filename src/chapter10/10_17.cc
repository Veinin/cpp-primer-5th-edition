#include <iostream>
#include <vector>
#include <algorithm>
#include "../chapter01/Sales_item.h"

using std::cout; using std::endl; using std::vector; using std::string;
using std::sort; using std::for_each;

int main()
{
    vector<Sales_item> v = {
        Sales_item("x-32"),
        Sales_item("x-222"),
        Sales_item("x-32"),
    };

    sort(v.begin(), v.end(), [](const Sales_item &lhs, const Sales_item &rhs) {
        return lhs.isbn().size() < rhs.isbn().size();
    });

    for_each(v.begin(), v.end(), [] (const Sales_item &item) {
        cout << item.isbn() << " \n";
    });

    return 0;
}