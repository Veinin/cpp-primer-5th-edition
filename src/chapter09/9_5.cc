#include <vector>
using std::vector;

auto find(vector<int>::const_iterator begin, vector<int>::const_iterator end, int value)
{
    while (begin != end) {
        if (*begin == value)
            return begin;
        ++begin;
    }
    return end;
}