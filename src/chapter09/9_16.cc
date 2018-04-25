#include <iostream>
#include <vector>
#include <list>

using std::cout;
using std::endl;
using std::vector;
using std::list;

int main()
{
    vector<int> v1 = {1, 2, 3, 4};
    list<int> l2 = {1, 2};
    list<int> l3 = {1, 3};
    list<int> l4 = {1, 2, 3, 4};

    cout << (v1 > vector<int>(l2.begin(), l2.end())) << endl;
    cout << (v1 < vector<int>(l3.begin(), l3.end())) << endl;
    cout << (v1 == vector<int>(l4.begin(), l4.end())) << endl;

    return 0;
}