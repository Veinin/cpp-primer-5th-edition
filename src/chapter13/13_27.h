#ifndef _13_22_H
#define _13_22_H

#include <iostream>

class HasPrt {
public:
    HasPrt(const std::string &s = std::string()) :
            ps(new std::string(s)), i(0), use(new size_t(0)) { }
    HasPrt(const HasPrt &hp) :
            ps(new std::string(*hp.ps)), i(hp.i), use(hp.use) { ++*use; }
    HasPrt &operator=(const HasPrt &rhs);
    ~HasPrt();

private:
    std::string *ps;
    int i;
    std::size_t *use;
};

HasPrt& HasPrt::operator=(const HasPrt &rhs)
{
    ++*rhs.use;
    if (--use == 0) {
        delete ps;
        delete use;
    }
    ps = rhs.ps;
    i = rhs.i;
    use = rhs.use;
    return *this;
}

HasPrt::~HasPrt()
{
    if (--*use == 0) {
        delete ps;
        delete use;
    }
}

#endif //_13_22_H
