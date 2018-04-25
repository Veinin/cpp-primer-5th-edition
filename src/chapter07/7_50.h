#ifndef _7_50_H
#define _7_50_H

#include <string>
#include <iostream>

class Person {
    friend std::istream &read(std::istream &, Person &person);
    friend std::ostream &print(std::ostream &, const Person &);

public:
    Person() = default;
    Person(const std::string &n, const std::string &a) : name(n), address(a) {}
    explicit Person(std::istream &is) { read(is, *this); }

    auto get_name() const -> std::string const& { return name; }
    auto get_addr() const -> std::string const& { return address; }

private:
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

#endif //_7_50_H