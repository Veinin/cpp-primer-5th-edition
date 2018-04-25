#include <iostream>
using std::cin; using std::cout; using std::endl; using std::cerr;

#include <fstream>
using std::ifstream;

#include "../chapter07/7_6.h"

int main()
{
    ifstream ifs("data/item.txt");

    Sales_data total;
    if (read(ifs, total)) {
        Sales_data trans;
        while (read(ifs, trans))
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