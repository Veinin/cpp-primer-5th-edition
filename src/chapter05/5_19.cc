#include <iostream>
using std::endl; using std::cin; using std::cout;

#include <string>
using std::string;

int main()
{
    string rsp;
    do {
        cout << "Please input tow strings:";
        string str1, str2;
        cin >> str1 >> str2;
        cout << ((str1 <= str2) ? str1 : str2) << endl;

        cout << "Enter y or n:";
        cin >> rsp;
    } while(!rsp.empty() && rsp == "y");

    return 0;
}