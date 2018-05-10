#ifndef _13_05_H
#define _13_05_H

#include <iostream>

class HasPrt {
public:
    HasPrt(const std::string &s = std::string()) : ps(new std::string(s)), i(0) { }
    HasPrt(const HasPrt &hp) : ps(new std::string(*hp.ps)), i(hp.i) {}

private:
    std::string *ps;
    int i;
};

#endif //_13_05_H
