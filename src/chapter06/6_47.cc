#include <iostream>
using std::cout; using std::endl;

#include <vector>
using std::vector;

void print(vector<int> &vec)
{
#ifndef NDEBUG
    cout << "vector size : " << vec.size() << endl;
#endif
    if (vec.empty())
        return;

    cout << vec.back() << endl;
}

int main()
{
    vector<int> vec{1, 2, 3, 4, 5, 6};
    print(vec);

    return 0;
}