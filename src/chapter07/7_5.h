#ifndef _7_5_H
#define _7_5_H

#include <string>

struct Person {
    std::string name;
    std::string address;

    auto get_name() const -> std::string const& { return name; }
    auto get_addr() const -> std::string const& { return address; }
};

#endif //_7_5_H