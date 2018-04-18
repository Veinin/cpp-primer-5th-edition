#include <iostream>
using std::cout;
using std::endl;

#include <vector>
using std::vector;

#include <cstring>

int main()
{
    vector<int> ivec(5, 1);

    int ia[5];
    decltype(ivec.size()) sz = ivec.size();

    for (int i = 0; i < sz; i++)
        ia[i] = ivec[i];

    for (auto v : ia)
        cout << v << " ";
    cout << endl;

    return 0;
}