#include <iostream>
using std::cin; using std::cout; using std::endl; using std::cerr;

#include <fstream>
using std::ifstream;
using std::ofstream;

#include "../chapter07/7_6.h"

int main(int argc, char **argv)
{
    ifstream ifs(argv[1]);
    ofstream ofs(argv[2], ofstream::app);

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
                print(ofs, total) << endl;
                total = trans;
            }
        }
        print(ofs, total) << endl;
        return 0;
    } else {
        cerr << "Not data!" << endl;
        return -1;
    }
}