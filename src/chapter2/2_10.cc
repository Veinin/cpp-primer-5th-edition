#include <iostream>

std::string global_str;
int global_int;

int main()
{
    int local_int;
    std::string local_str;

    std::cout << global_str.c_str() << std::endl;   // empty string
    std::cout << global_int << std::endl;           // 0

    std::cout << local_str.c_str() << std::endl;    // empty string
    std::cout << local_int << std::endl;            // uninitialized, local variable might be initialize

    return 0;
}