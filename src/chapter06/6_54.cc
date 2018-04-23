#include <iostream>
using std::cout; using std::endl;

#include <vector>
using std::vector;

int func(int, int);

using pFunc = decltype(func) *;
using pFunc2 = int (*)(int, int);
typedef decltype(func) *pFunc3;
typedef int (*pFunc4)(int, int);

using Func1 = int (int, int);
using Func2 = decltype(func);

int main()
{
    vector<pFunc> vec1;
    vector<pFunc2> vec2;
    vector<pFunc3> vec3;
    vector<pFunc4> vec4;

    vector<Func1> vec5;
    vector<Func2> vec6;

    return 0;
}