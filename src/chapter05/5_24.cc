#include <iostream>
using std::endl; using std::cin; using std::cout;

#include <stdexcept>
using std::runtime_error;

int main()
{
    int ia, ib;

    cin >> ia >> ib;
    if (ib == 0)
        throw runtime_error("divisor is zero");
    cout << ia / ib << endl;

    return 0;
}