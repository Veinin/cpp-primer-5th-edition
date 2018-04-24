#ifndef _7_14_H
#define _7_14_H

#include <string>

struct Sales_data {
    Sales_data() : bookNo(0), units_sold(0), revenue(0);

    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};

#endif //_7_14_H