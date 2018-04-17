#include <iterator>
using std::begin; using std::end;

#include <iostream>
using std::cout; using std::endl;

int main()
{
    int ia[12] = {0,1,2,3,4,5,6,7,8,9,10,11};
    int *pbeg = begin(ia);
    int *pend = end(ia);

    for (auto p = pbeg; p != pend; ++p)
        cout << *p << ' ';
    cout << endl;

    while (pbeg != pend)
        cout << *pbeg++ << " ";

    return 0;
}