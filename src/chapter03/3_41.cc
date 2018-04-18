#include <iostream>
using std::cout;
using std::endl;

#include <vector>
using std::vector;

#include <iterator>
using std::begin;
using std::end;

int main()
{
    int ci[] = {1, 2, 3, 4, 5};
    vector<int> ivec(begin(ci), end(ci));

    for (auto v : ivec)
        cout << v << " ";
    cout << endl;

    return 0;
}