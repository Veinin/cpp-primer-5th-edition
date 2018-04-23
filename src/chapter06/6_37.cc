#include <iostream>
using std::cout; using std::endl;
using std::string;

using SArr = string[10];
SArr& func1(SArr &arr);

auto func2(SArr &arr) -> string(&)[10];

string arr[10];
decltype(arr) &func3(SArr &arr);