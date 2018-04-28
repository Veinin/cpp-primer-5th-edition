#include <iostream>
#include <algorithm>
#include <vector>

using std::cout; using std::vector; using std::count;

int main()
{
    vector<int> v{0, 1, 1, 1, 2, 3};
    cout << count(v.cbegin(), v.cend(), 1);

    return 0;
}