#ifndef _13_22_H
#define _13_22_H

#include <iostream>

class HasPrt {
public:
    friend void swap(HasPrt&, HasPrt&);
    friend bool operator<(const HasPrt&, const HasPrt&);

    HasPrt(const std::string &s = std::string()) : ps(new std::string(s)), i(0) { }
    HasPrt(const HasPrt &hp) : ps(new std::string(*hp.ps)), i(hp.i) {}
    HasPrt &operator=(const HasPrt &rhs);
    ~HasPrt() { delete ps; }

private:
    std::string *ps;
    int i;
};

HasPrt& HasPrt::operator=(const HasPrt &rhs)
{
    auto newp = new std::string(*rhs.ps);
    delete ps;
    ps = newp;
    i = rhs.i;
    return *this;
}

void swap(HasPrt &lhs, HasPrt &rhs)
{
    using std::swap;
    swap(lhs.ps, rhs.ps);
    swap(lhs.i, rhs.i);

    std::cout << "swap(HasPrt &lhs, HasPrt &rhs)" << std::endl;
}

bool operator<(const HasPrt &lhs, const HasPrt &rhs)
{
    return *lhs.ps < *rhs.ps;
}

#endif //_13_22_H
