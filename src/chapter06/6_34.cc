#include <vector>
using std::vector;

using Iter = vector<int>::const_iterator;

void print(Iter begin, Iter end)
{
    if (begin != end) {
        cout << *begin << endl;
        print(++begin, end);
    }
}

int main()
{
    vector<int> vec{1, 2, 3, 4, 5, 6, 7};
    print(vec.cbegin(), vec.cend());
    return 0;
}