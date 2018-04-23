#include <iostream>
using std::cin; using std::cout; using std::endl; using std::cerr;

#include "7_6.h"

int main()
{
    Sales_data total;
    if (read(cin, total)) {
        Sales_data trans;
        while (read(cin, trans))
        {
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