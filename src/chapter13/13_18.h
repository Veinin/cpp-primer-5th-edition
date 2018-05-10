#ifndef _13_18_H
#define _13_18_H

#include <string>

class Employee {
public:
    Employee() : id(unique_id++) {}
    Employee(std::string s) : id(unique_id++), name(s) {}

private:
    static int unique_id;

    int id;
    std::string name;
};

int Employee::unique_id = 0;

#endif //_13_18_H
