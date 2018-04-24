#include <iostream>
using std::cin; using std::cout; using std::endl; using std::cerr;

#include "7_11.h"

int main()
{
    Sales_data item1;
    print(cout, item1) << endl;

    Sales_data item2("7649-X");
    print(cout, item2) << endl;

    Sales_data item3("7769-X", 10, 5.5);
    print(cout, item3) << endl;

    Sales_data item4(cin);
    print(cout, item4);

    return 0;
}