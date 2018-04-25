#include <vector>
using std::vector;

bool find(vector<int>::const_iterator begin, vector<int>::const_iterator end, int value)
{
    while (begin != end) {
        if (*begin == value)
            return true;
        ++begin;
    }
    return false;
}