#include <iostream>
using std::cout;
using std::endl;

#include <vector>
using std::vector;

#include <iterator>
using std::begin;
using std::end;

bool compare(const int* ab, const int* ad, const int* bb, const int* be)
{
    if (ab - ad != bb - be)
        return false;

    for (auto i = ab, j = bb; i != ad && j != be; ++i, ++j)
        if (*i != *j)
            return false;

    return true;
}

int main()
{
    int ia[] = {0, 1, 2, 3};
    int ib[] = {1, 2, 3, 4};

    if (compare(begin(ia), end(ia), begin(ib), end(ib)))
        cout << "The two arrays are equal." << endl;
    else
        cout << "The two arrays are not equal." << endl;

    vector<int> va = {0, 1, 2, 3};
    vector<int> vb = {1, 2, 3, 4};
    if (va == vb)
        cout << "The two vectors are equal." << endl;
    else
        cout << "The two vectors are not equal." << endl;

    return 0;
}