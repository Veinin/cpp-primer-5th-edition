#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <vector>
using std::vector;

#include <string>
using std::string;

void print_content(const vector<int>& vec)
{
    cout << "size : " << vec.size() << " elements : [";
    for (auto it = vec.cbegin(); it != vec.end(); ++it)
        cout << *it << ",";
    cout << "]" << endl;
}

void print_content(const vector<string>& vec)
{
    cout << "size : " << vec.size() << " elements : [";
    for (auto it = vec.cbegin(); it != vec.end(); ++it)
        cout << *it << ",";
    cout << "]" << endl;
}

int main()
{
    vector<int> v1;
    vector<int> v2(10);
    vector<int> v3(10, 42);
    vector<int> v4{10};
    vector<int> v5{10, 42};
    vector<string> v6{10};
    vector<string> v7{10, "hi"};

    print_content(v1);
    print_content(v2);
    print_content(v3);
    print_content(v4);
    print_content(v5);
    print_content(v6);
    print_content(v7);

    return 0;
}