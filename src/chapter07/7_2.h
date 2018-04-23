#ifndef _7_2_H
#define _7_2_H

#include <string>

struct Sales_data {
    std::string bookNo;
    unsigned units_sold;
    double revenue;

    std::string isbn() const { return bookNo; }
    Sales_data &combine(const Sales_data&);
};

Sales_data& Sales_data::combine(const Sales_data &rhs) {
    units_sold += rhs.units_sold;
    revenue += rhs.revenue;
    return *this;
}

#endif //_7_2_H