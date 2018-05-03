#include <iostream>
#include <algorithm>
#include <vector>

using std::cout; using std::endl; using std::vector; using std::fill_n;

int main()
{
    vector<int> v{1, 4, 5, 6, 10};
    fill_n(v.begin(), v.size(), 0);

    for (auto i :  v)
        cout << i << " ";
    cout << endl;

    return 0;
}