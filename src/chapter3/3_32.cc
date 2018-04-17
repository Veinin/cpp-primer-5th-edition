#include <iostream>
using std::cout;
using std::endl;

#include <vector>
using std::vector;

int main()
{
    int a[10];
    int b[10];
    vector<int> ivec;

    for (int i = 0; i < 10; ++i) {
        a[i] = i;
        b[i] = a[i];
        ivec.push_back(i);
    }

    for (auto v : a)
        cout << v << " ";
    cout << endl;

    for (auto v : b)
        cout << v << " ";
    cout << endl;

    for (auto v : ivec)
        cout << v << " ";
    cout << endl;

    return 0;
}