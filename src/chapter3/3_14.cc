#include <iostream>
using std::cin;
using std::cout;

#include <vector>
using std::vector;

int main()
{
    vector<int> ivec;
    int num;

    while(cin >> num)
        ivec.push_back(num);

    for (auto v : ivec)
        cout << v << " ";

    return 0;
}