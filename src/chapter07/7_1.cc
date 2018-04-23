#include <iostream>
using std::cin; using std::cout; using std::endl; using std::cerr;

#include <string>
using std::string;

struct Sales_data {
    string bookNo;
    unsigned units_sold;
    double revenue;
};

int main()
{
    Sales_data total;
    if (cin >> total.bookNo >> total.units_sold >> total.revenue) {
        Sales_data trans;
        while (cin >> trans.bookNo >> trans.units_sold >> trans.revenue)
        {
            if (total.bookNo == trans.bookNo)
            {
                total.units_sold += trans.units_sold;
                total.revenue += trans.revenue;
            }
            else
            {
                cout << total.bookNo << " " << total.units_sold << " " << total.revenue << endl;
                total = trans;
            }
        }
        cout << total.bookNo << " " << total.units_sold << " " << total.revenue << endl;
        return 0;
    } else {
        cerr << "Not data!" << endl;
        return -1;
    }
}