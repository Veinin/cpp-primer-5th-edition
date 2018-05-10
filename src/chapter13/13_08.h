#ifndef _13_05_H
#define _13_05_H

#include <iostream>

class HasPrt {
public:
    HasPrt(const std::string &s = std::string()) : ps(new std::string(s)), i(0) { }
    HasPrt(const HasPrt &hp) : ps(new std::string(*hp.ps)), i(hp.i) {}

    HasPrt &operator=(const HasPrt &rhs) {
        if (this != &rhs) {
            delete ps;
            ps = new std::string(*rhs.ps);
            i = rhs.i;
        }
        return *this;
    }

private:
    std::string *ps;
    int i;
};

#endif //_13_05_H
