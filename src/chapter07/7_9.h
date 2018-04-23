#ifndef _7_4_H
#define _7_4_H

#include <string>
#include <iostream>

struct Person {
    std::string name;
    std::string address;

    auto get_name() const -> std::string const& { return name; }
    auto get_addr() const -> std::string const& { return address; }
};

std::istream &read(std::istream is, Person &person)
{
    is >> person.name >> person.address;
    return is;
}

std::ostream &print(std::ostream os, const Person &person)
{
    os << person.name << " " << person.address;
    return os;
}

#endif //_7_4_H