#include <iostream>

struct IfThenElse {
    int operator()(bool b, int ia, int ib)
    {
        return b ? ia : ib;
    }
};

int main()
{
    IfThenElse check;
    std::cout << check(true, 1, 2) << std::endl;

    return 0;
}