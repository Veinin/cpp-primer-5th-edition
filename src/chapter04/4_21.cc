#include <iostream>
using std::cout;
using std::endl;

#include <vector>
using std::vector;

int main()
{
    vector<int> veci = {1, 5, 6, 7, 10};

    for (auto &v : veci)
        cout << ((v & 0x1) ? v*2 : v) << " ";
    cout << endl;

    return 0;
}