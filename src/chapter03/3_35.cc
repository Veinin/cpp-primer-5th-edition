#include <iostream>
using std::cout;
using std::endl;

#include <iterator>
using std::begin;
using std::end;

int main()
{
    int ia[12] = {0,1,2,3,4,5,6,7,8,9,10,11};

    auto p = begin(ia);
    while(p != end(ia))
        *p++ = 0;

    for (auto i : ia)
        cout << i << " ";

    return 0;
}