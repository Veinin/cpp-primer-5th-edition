#ifndef _SALES_DATA_H
#define _SALES_DATA_H

#include <string>
#include <iostream>

class Sales_data {
    friend std::ostream &operator<<(std::ostream &, const Sales_data &);
    friend std::istream &operator>>(std::istream &, Sales_data &);
    friend Sales_data operator+(const Sales_data &, const Sales_data &);
    friend bool operator==(const Sales_data &, const Sales_data &);

public:
    Sales_data() = default;
    Sales_data(const std::string &s): bookNo(s) { }
    Sales_data(const std::string &s, unsigned n, double p):
            bookNo(s), units_sold(n), revenue(p*n) { }
    Sales_data(std::istream &);

    std::string isbn() const { return bookNo; }
    Sales_data& operator+=(const Sales_data&);
private:
    double avg_price() const;
    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};

std::ostream &operator<<(std::ostream &, const Sales_data &);
std::istream &operator>>(std::istream &, Sales_data &);
Sales_data operator+(const Sales_data &, const Sales_data &);
bool operator==(const Sales_data &, const Sales_data &);

#endif //_SALES_DATA_H
