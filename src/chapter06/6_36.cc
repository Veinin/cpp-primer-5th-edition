#include <iostream>
using std::cout; using std::endl;
using std::string;

string (&func(string (&) [10])) [10];

int main()
{
    string str[10] = {};
    func(str)[0] = string("aaa");
    cout << str[0] << endl;

    return 0;
}

string (&func(string (&strArr) [10])) [10]
{
    return strArr;
}