#include <iostream>
#include <vector>
#include <algorithm>
#include "../chapter01/Sales_item.h"

using std::cout; using std::endl; using std::vector; using std::string;
using std::stable_sort;

inline
bool compare_isbn(const Sales_item &lhs, const Sales_item &rhs)
{
    return lhs.isbn() == rhs.isbn();
}

int main()
{
    vector<Sales_item> v = {
        Sales_item("x-32"),
        Sales_item("x-222"),
        Sales_item("x-32"),
    };

    stable_sort(v.begin(), v.end(), compare_isbn);

    for (const Sales_item &item : v)
        cout << item.isbn() << " \n";

    return 0;
}