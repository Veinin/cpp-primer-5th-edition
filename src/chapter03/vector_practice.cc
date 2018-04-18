#include <iostream>
using std::cout; using std::endl;

#include <string>
using std::string;

#include <vector>
using std::vector;

int main()
{
    vector<string> svec;
    vector<int> ivec;
    vector<vector<string>> file;
    vector<vector<int>> vecOfVec;

    // all four vectors have size 0
    cout << svec.size() << " " << ivec.size() << " "
         << file.size() << " " << vecOfVec.size() << endl;

    vector<int> ivec2(10);      // ten elements, each initialized to 0
    vector<int> ivec3(10, -1);  // ten elements, each initialized to -1
    vector<string> svec2(10);   // ten elements, each an empty string
    vector<string> svec3(10, "hi!");    // tem elements, each elements is "hi!"
    cout << ivec2.size() << " " << ivec3.size() << " "
         << svec2.size() << " " << svec3.size() << endl;

    vector<string> v1(10);  // construct v1 with ten value-initialized elements
    vector<string> v2{10};  // ten elements value-initialized elements
    vector<string> v3(10, "hi");    // ten elements with value "hi"
    vector<string> v4{10, "hi"};    // ten elements with values "hi"
    cout << v1.size() << " " << v2.size()
         << " " << v3.size() << " " << v4.size() << endl;

    vector<int> v5(10, 1);  // ten elements with value 1
    vector<int> v6{10, 1};  // two elements with values 10 and 1
    cout << v5.size() << " " << v6.size() << endl;

    vector<int> alt_v3 = {10};    // one element with value 10
    vector<int> alt_v4 = {10, 1}; // two elements with values 10 and 1
    cout << alt_v3.size() << " " << alt_v4.size() << endl;

    return 0;
}