#include <iostream>
using std::cin; using std::cout; using std::endl; using std::cerr;

#include "7_12.h"

int main()
{
    Sales_data total(cin);
    if (!total.isbn().empty()) {
        while (cin)
        {
            Sales_data trans(cin);
            if (total.isbn() == trans.isbn())
            {
                total.combine(trans);
            }
            else
            {
                print(cout, total) << endl;
                total = trans;
            }
        }
        print(cout, total) << endl;
        return 0;
    } else {
        cerr << "Not data!" << endl;
        return -1;
    }
}