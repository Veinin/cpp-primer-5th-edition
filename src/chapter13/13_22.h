#ifndef _13_22_H
#define _13_22_H

#include <iostream>

class HasPrt {
public:
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

#endif //_13_22_H
