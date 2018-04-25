#include <iostream>
#include <vector>
#include <list>

using std::vector;
using std::list;

int main()
{
    list<int> list(3, 1);
    vector<int> vec(3, 2);

    vector<double> vec2(list.cbegin(), list.cend());
    vector<double> vec3(vec.begin(), vec.end());

    for (auto d : vec2)
        std::cout << d << " ";

    std::cout << std::endl;

    for (auto d : vec3)
        std::cout << d << " ";

    return 0;
}