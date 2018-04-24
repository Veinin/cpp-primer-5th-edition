#ifndef _7_15_H
#define _7_15_H

#include <string>
#include <iostream>

struct Person {
    Person() = default;
    Person(const std::string &n, const std::string &a)
            : name(n), address(a) {}

    auto get_name() const -> std::string const& { return name; }
    auto get_addr() const -> std::string const& { return address; }

    std::string name;
    std::string address;
};

std::istream &read(std::istream &is, Person &person)
{
    is >> person.name >> person.address;
    return is;
}

std::ostream &print(std::ostream &os, const Person &person)
{
    os << person.name << " " << person.address;
    return os;
}

#endif //_7_15_H