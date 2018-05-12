#include <iostream>
#include <vector>
#include <algorithm>

struct IsEqual {
    IsEqual(int v) : value(v) { }
    bool operator()(int c) {
        return value == c;
    }
    int value;
};

int main()
{
    std::vector<int> ivec = {1, 2, 4, 5, 6, 1};
    std::replace_if(ivec.begin(), ivec.end(), IsEqual(1), 2);
    for (auto i : ivec)
        std::cout << i << " ";
    return 0;
}