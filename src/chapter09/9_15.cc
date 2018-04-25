#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

int main()
{
    vector<int> v1 = {1, 2, 3, 4};
    vector<int> v2 = {1, 2};
    vector<int> v3 = {1, 3};
    vector<int> v4 = {1, 2, 3, 4};

    cout << (v1 > v2) << endl;
    cout << (v1 < v3) << endl;
    cout << (v1 == v4) << endl;

    return 0;
}